# Libunit

Libunit is a Micro-framework written in C Programming Language dedicated to testing your functions written in C. 
Framework executes a series of inter-independent tests, storing them in a list with a specific 
name which is written to the standard output. Each test is executed as a separate process (using fork).
A process is closed at the end of the test and gives the hand back to the parent process. 
Framework catches the result of the child process or the type of interruption in case of a crash (SegFault and/or BusError).

Framework was developed by dwald(me) and jpriou.
