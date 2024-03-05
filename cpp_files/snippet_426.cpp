#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void Capitalise(char *phrase)
{
	
	for ( int i = 0 ; i < strlen(phrase) ; i++ )
	{
		if ( i == 0 ) {
			if ( 'a' <= phrase[i] || phrase[i] >= 'z' ){
				phrase[i] -= 32;
			}
			continue;
		}
		else if ( phrase[i-1] == ' '){
			if ( 'a' <= phrase[i] || phrase[i] >= 'z' ){
				phrase[i] -= 32;
			}
		}
	}
}