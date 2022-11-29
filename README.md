# SimpleEncodeDecodeString
A simple string encoder and decoder using a shared key.

For use in LoRa or other unencrypted RF transmissions.

Tested on ESP32 transmitting & receiving encoded LoRa packets.

## How to use
Set the key and text to encode:

String key = "AnyLettersOrNumbers134OrLength"; //Only tested with letters and numbers

String text = "Text to encode - works with JSON or any valid string";

Use the encodeText(key, text) function to return encoded text using the key.

Use the decodeText(key, text) function to return decoded text using the key.

