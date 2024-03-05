//The  function which takes a single string as input representing a phrase, 
//and capitalises the first character in each word in the phrase.
//Author: Johannah Meer

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> 


void Capitalise(char* phrase) 
{
    //variable
    int length = strlen(phrase);

    for (int i = 0; i < length; i++)
    {
          // | is character lowercase |        | Is previous a space or is it start of string |
        if (phrase[i] >= 'a' && phrase[i] <= 'z' && (phrase[i - 1] == ' ' || i == 0))
        {
            phrase[i] -= 32;
        }
    }

}