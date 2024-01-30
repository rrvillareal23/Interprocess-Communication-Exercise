

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define IN_FILE "BtoA.txt" //read
#define OUT_FILE "AtoB.txt" //write to
#define MESSAGE "Hello B"
#define BUFFER_SIZE 256

int main(){
  int inFile;
  int outFile;
  int count = 0;
  char buffer[BUFFER_SIZE];

  //open files
  if ((outFile = open(OUT_FILE, O_CREAT | O_APPEND | O_WRONLY | O_NONBLOCK, 0777)) == -1){
    printf("ERROR: Unable to open %s\n", OUT_FILE);
    exit(1);
  }
  if ((inFile = open(IN_FILE, O_CREAT | O_RDONLY | O_NONBLOCK, 0777)) == -1){
    printf("ERROR: Unable to open %s\n", IN_FILE);
    exit(1);
  }

  //iniate conversation
  write(outFile, MESSAGE, strlen(MESSAGE));

  while(1){
    //read from the infile
    memset(buffer, 0, sizeof(buffer));
    count = read(inFile, buffer, sizeof(buffer));

    //if I recieved a message, then write to the outfile
    if (count > 0){
      //look at length and prints if matches + write to AtoB
      if(strlen(buffer)== strlen(MESSAGE)){
        write(outFile, MESSAGE, strlen(MESSAGE));
        printf("Recieved: %s\n", buffer);
      }
    }

    sleep(1);

  }

  close(outFile);
  close(inFile);

  return 0;
}