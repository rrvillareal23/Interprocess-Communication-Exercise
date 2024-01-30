# Interprocess Communication Exercise

This repository contains two C programs, `Exercise11_1a.c` and `Exercise11_1b.c`, demonstrating interprocess communication using file operations. The programs simulate a simple conversation between processes A and B by writing and reading messages to and from text files (`AtoB.txt` and `BtoA.txt`).

## Features

- **Conversation Simulation**: Processes A and B take turns writing and reading messages to and from designated text files.

- **File Operations**: The programs use file operations to create, open, write, and read messages from text files.

## How to Run

1. Compile the programs using the provided Makefile.

    ```bash
    make
    ```

2. Run the compiled programs to initiate the conversation.

    ```bash
    make run
    ```

3. Optionally, terminate the processes.

    ```bash
    make kill
    ```

## Files

- **Exercise11_1a.c**: Source code for process A, which writes messages to `BtoA.txt` and reads messages from `AtoB.txt`.

- **Exercise11_1b.c**: Source code for process B, which writes messages to `AtoB.txt` and reads messages from `BtoA.txt`.

- **Makefile**: Contains rules for compilation and execution.

## Cleanup

- To remove compiled files and terminate processes, use the following command:

    ```bash
    make clean
    ```

## Notes

- This exercise serves as a basic example of interprocess communication using files in a Unix-like environment.

- Feel free to explore and modify the code for educational purposes.

## Author

- **Robert (Ricky) Villareal**
