void Helper(int i, char* phrase)
{
	phrase[i] = phrase[i] - ('a' - 'A');
}



void Capitalise(char* phrase)
{
	int i, space, length;

	length = strlen(phrase);
	//capitalize first word in phrase
	if (phrase[0] >= 'a' && phrase[0] <= 'z') {
		Helper(0, phrase);
	}

	// capitalize rest of the words in the phrase 
	for (i = 0; i < length; i++) {
		if ((phrase[i] == ' ')&& (phrase[i+1] >= 'a' && phrase[i+1] <= 'z')) {
			space = i + 1;
			Helper(space, phrase); 
		}
	}
}