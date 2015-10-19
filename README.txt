#Enigma-Machine
## Description
This exercice is part of my second year Computer Science course at Imperial College London.
It is an Implementation, in C++, of the Enigma Machine invented by the nazis to encrypt their messages during WWII, which was then later decrypted by the famous computer scientist Alan Turing.
With the executable, you can have fun and encrypt/decrypt all sorts of messages using the seven rotors given in the `/rotors`
folder. To find out more about the enigma machine, click here: [Enigma-Machine](https://en.wikipedia.org/wiki/Enigma_machine).
## Usage
Warning! This program was written to compile under Linux GCC (G++) and may not work under other operating systems and with different compilers.
To compile, type `make` while in the repositery, then, simply invoke the enigma machine
like so: `./enigma rotors/II.rot rotors/I.rot .... (as many rotors as you like) plugboards/null.pb (or any other plugboard)`

## Testing
You can run the tests (written in python), using the tests.py file.
Simply invoke the program by typing `./tests.py`.

