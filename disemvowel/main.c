#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
<<<<<<< HEAD
  char *diseMvd;

=======
  char *finResult
  
>>>>>>> 997c4c3b8de2d11b838d70e48a59810b3c7e4577
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
<<<<<<< HEAD
    diseMvd = disemvowel(line);
	  printf("%s\n", disemvowel(line));
  free(diseMvd);
=======
   
	  finResult =  disemvowel(line);

	  printf("%s\n", finResult);
 
	  free(finResult);
 
>>>>>>> 997c4c3b8de2d11b838d70e48a59810b3c7e4577
  }

  free(line);

}
