/* Description: This code will take  takes a single string as input representing a phrase, and capitalizes the first character in each word in the phrase.
* Created by Juny Lee on 13/10/21
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

int Capitalise(char* phrase){
	int i;
	int length;
	int pH = 0;
	
	length = strlen(phrase);
	
	phrase[0] = toupper(phrase[0]);
	
	for (i = 0; i <= length; i++){
		if (phrase[i] == ' '){
			pH = i + 1;
			phrase[pH] = toupper(phrase[pH]);
		} 
	}
	
	return *phrase;
}