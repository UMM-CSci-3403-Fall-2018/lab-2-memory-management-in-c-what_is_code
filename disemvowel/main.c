#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  char *finResult
  
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
   
	  finResult =  disemvowel(line);

	  printf("%s\n", finResult);
 
	  free(finResult);
 
  }

  free(line);

}
