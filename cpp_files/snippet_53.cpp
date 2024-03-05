// Capatalising the first character of each word
//Author: Malama Ieremia
#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0')
	{
		if (i == 0 || phrase[i - 1] == ' ')
		{
			phrase[i] = toupper(phrase[i]);
		}
		i++;
	}
}