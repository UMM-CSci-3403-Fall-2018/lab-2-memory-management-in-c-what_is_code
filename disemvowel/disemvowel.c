#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
	int length, i;
	char *result;
	int pointer;


	// Set them equal to zero so that it does not allocate extra space.

	i = 0;
	pointer = 0;
	

	//Set length to be of string
	length = strlen(str);

// might have to add more here

	//Loop that checks the string for vowels and removes the vowel
	for (i < length) 
	{ if 
        (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u')
	else {
	result[pointer] = str[i];
	i++;
	pointer++;
		}
  }

	// Add more

  return (char*) "";
}
