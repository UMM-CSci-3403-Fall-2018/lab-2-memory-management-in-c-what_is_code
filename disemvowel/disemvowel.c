#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
	int length, i;
	char *result;
	int pointer = 0;
	int notVowelCounter =0;

	//Set length to be of string
	length = strlen(str);

	//Loop that counts number of times vowel is not in the given string
	for (i=0; i < length ; ++i) 
	{ if 
		(tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u')
		{
	  notVowelCounter++;
		}
  }

	// Add more

  return (char*) "";
}
