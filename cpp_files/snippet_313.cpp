/*The Capitalise() function capitalises the first character in each word in the phrase.
Only lower case alphbetic characters will be capitalised*/
void Capitalise(char *phrase)
{
	//Declare variables
	int i;

	//Loop through array to capitalise characters
	for (i = 0; phrase[i] != '\0'; i++) //Continue to loop until index reaches the end of the string
	{
		if (phrase[0] >= 97) //If the first value is lower case, capitalise the first character
		{
			phrase[0] = phrase[0] - 32; //Capitalise the character
		}
		else if (phrase[i - 1] == 32 && phrase[i] >= 97) //If the character after a space is lower case, capitalise the character
		{
			phrase[i] = phrase[i] - 32;
		}
	}
}