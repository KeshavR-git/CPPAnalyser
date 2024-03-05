/* Description: This program shall capitalise the first letter in each 
  * word/phrase.
* Created by Ritesh Hanmanthu on Oct 13, 2021
*/

// EXERCISE 3
void Capitalise(char* phrase)
{
    int i = 0;

    while (phrase[i] != 0)
    {
        if ((phrase[i] <= 'z') && (phrase[i] >= 'a') && (i == 0))
        {
            phrase[i] = (char)(phrase[i] - ('a' - 'A'));
        }
        else if ((phrase[i] == ' ') && (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z'))
        {
            phrase[i + 1] = (char)(phrase[i + 1] - ('a' - 'A'));
        }

        i++;
    }
}