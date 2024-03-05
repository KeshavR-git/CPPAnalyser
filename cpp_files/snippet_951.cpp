#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Capitalise(char *phrase) {
        int i;
        int x = strlen(phrase);
        int n = 0;

        for (i = 0; i < x; i++)
        {
            if (isspace(phrase[i]))
                n = 0;

            if (isalpha(phrase[i]) && !isspace(phrase[i]) && n == 0)
            {
                phrase[i] = toupper(phrase[i]);
                n = 1;
            }
        }
    }