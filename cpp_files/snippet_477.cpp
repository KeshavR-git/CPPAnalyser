void
Capitalise (char *phrase)
{

#include  <string.h>

  //Obtaining length of phrase 
  int length = strlen (phrase);

  //Generating tempPhrase array
  char tempPhrase[length + 1];
  int i;
  for (i = 1; i < (length + 1); i++)
    {
      tempPhrase[i] = phrase[i - 1];
    }
  tempPhrase[0] = ' ';

  //Finding number of positions and then initialising position array
  int count = 0;
  int b;
  for (b = 1; b < (length + 1); b++)
    {
      if ((tempPhrase[b - 1] == ' ')
	  && ((tempPhrase[b] >= 97) && (tempPhrase[b] <= 122)))
	{
	  count++;
	}
    }
  int positions[count];

  //Filling position array
  int j = 0;
  int m = 0;
  for (m = 1; m < (length + 1); m++)
    {
      if ((tempPhrase[m - 1] == ' ')
	  && ((tempPhrase[m] >= 97) && (tempPhrase[m] <= 122)))
	{
	  positions[j] = m;
	  j++;
	}
    }

  //Performing capitalisation by shifting value through ASCII table
  int a;
  for (a = 0; a < (count); a++)
    {
      tempPhrase[positions[a]] = (tempPhrase[positions[a]] - 32);
    }

  //Shifting tempPhrase array back to normal
  int l;
  for (l = 0; l < (length); l++)
    {
      phrase[l] = tempPhrase[l + 1];
    }

}