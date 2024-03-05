void Capitalise(char *phrase)
{
	int i, length;
	length = strlen(phrase) - 1; //length of phrase minus '\0' at the end
	
	phrase[0] = toupper(phrase[0]); // makes the first letter uppercase
	for (i = 1; i <= length; i++) // starts from second letter in phrase 
	{
		if (phrase[i] == ' ') // if there is a space in the phrase 
		{
			phrase[i + 1] = toupper(phrase[i + 1]); //make uppercase
		}
	}
}