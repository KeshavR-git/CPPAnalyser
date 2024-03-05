#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <ctype.h>
#include<string.h>

void Capitalise(char *phrase) {
	 
	 int i = 0;
	 while(phrase[i]!= 0) {

		if((islower(phrase[i]) && ((i==0) || (phrase[i-1] == ' ')))){
			phrase[i] = (char)toupper(phrase[i]);
		}
	i++;
	}
}