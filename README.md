# Enigma-Machine
## Description
This is an implementation of the Enigma-Machine in C++, as part of my Computer Science Course at Imperial College.
The Enigma Machine was invented during the second world war to encrypt/ decrypt messages. It was eventually cracked by Alan 
Turing, a vary famous Computer Scientist. With this implementation, you can have fun and encrypt/ decrypt as many messages 
as you like! The spec for this exerice is available in `/doc`.
## Usage
(Warning, this version uses Linux GCC (G++) which may not compile under different operating systems depending
on the compilers that are being used).
To compile, type `make` while in the repositery. Then, simply invoke the executable like so:
`./enigma rotors/II.rot rotors/I.rot (or any rotor) ... (as many rotors as you like, there is no limit on this implementation) 
plugboard/null.pb (or other plugboards)`.

