# Simple Boolean Program Notes
## Setting up OpenPLC Runtime with OpenPLC Editor
* I spent some time chasing my own tail because I set the IP Address to "https://127.0.0.1:8443" for my OpenPLC Runtime v4 instance in the Configuration of my OpenPLC Editor which resulted in "Connection Failed".  It wasn't until I found a YouTube video with a walkthrough on the environment setup that I realized I only had to put in the ip address without the protocol or port, i.e. "127.0.0.1".
* I created a simple boolean program with two boolean variables representing switches in serial to turn on a boolean variable representing a light.
### Screenshots
![alt text](image.png)