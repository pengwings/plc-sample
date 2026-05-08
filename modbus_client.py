import time
import struct
from pymodbus.client import ModbusTcpClient

# Connect to OpenPLC Runtime
client = ModbusTcpClient('127.0.0.1', port=502)
client.connect()

def write_temperature(register_address, value):
    # Pack the 32-bit integer into bytes, then split into two 16-bit words
    packed = struct.pack('>i', value)
    high_word = (packed[0] << 8) | packed[1]
    low_word = (packed[2] << 8) | packed[3]
    client.write_registers(register_address, [high_word, low_word])

def read_fan():
    result = client.read_coils(0, 1)
    return result.bits[0]

# Test cases
test_cases = [
    (85, 50),   # TempSensor1 above threshold, fan should be ON
    (60, 50),   # Both below threshold, fan should be OFF
    (60, 95),   # TempSensor2 above threshold, fan should be ON
    (50, 50),   # Both well below, fan should be OFF
]

for temp1, temp2 in test_cases:
    write_temperature(0, temp1)   # TempSensor1 → registers 0-1
    write_temperature(2, temp2)   # TempSensor2 → registers 2-3
    print(f"TempSensor1: {temp1}, TempSensor2: {temp2}")
    
    time.sleep(0.5)  # Wait for PLC scan cycle
    
    fan_status = read_fan()
    print(f"Fan ON: {fan_status}")
    print("---")

client.close()