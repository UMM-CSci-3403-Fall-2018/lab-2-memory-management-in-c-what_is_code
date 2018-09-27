#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  
        int l, i;
        char *finResult;
        int finResultpointer = 0;
        int nonvowelcounter = 0;
       
       	l = strlen(str);
       
       	//for loop that counts non vowel and increases pointer
       
       	for (i = 0; i < l; ++i) 
	{
        	if 
		(tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u'){
        nonvowelcounter++; }
       		 }
        //creation of the final result string
       
       	finResult = (char*) calloc(nonvowelcounter+1, sizeof(char));
       
       	//Putting all the non-vowel characters into finResult
        for (i=0; i < l; ++i)
       	{
       		 if 
			 (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u'){
        finResult[finResultpointer] = str[i];
        finResultpointer++;}
       		 }
        
	finResult[nonvowelcounter] = '\0';

        return finResult;

       }
