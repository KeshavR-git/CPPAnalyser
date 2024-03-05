/* Lab 10, created by Kathan Panchal. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char *phrase)
{
	int i;
	
	for(i=0; phrase[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((phrase[i]>='a' && phrase[i]<='z'))
				phrase[i]=phrase[i]-32; //make it capital
			continue; 
		}
		if(phrase[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character 
			if(phrase[i]>='a' && phrase[i]<='z')
			{
				phrase[i]=phrase[i]-32; //make it capital
			}
		}
	}
}