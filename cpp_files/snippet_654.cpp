//This function capitalises the first letter of a word
//Author: Daniela

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


void Helper(char *phrase, int index)
{
	//Check if element in array is a lower case letter
	if ((phrase[index] >= 97) && (phrase[index] <= 122)) {
		phrase[index] = phrase[index] - 32; //Changes lower case to capital letter
	}
		
}

void Capitalise(char *phrase)
{
	//Assign counter
	int i;

	//Immediately puts first element in helper function
	Helper(phrase, 0);

	//Goes through phrase array
	for (i = 1; i < strlen(phrase) -1 ; i++) {
		if (phrase[i] == ' ') { //If phrase element has space,
			Helper(phrase, i+1); //Put the next element into the Helper function
		}
	}

}