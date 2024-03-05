void Capitalise(char* phrase) 
{
	int i;
	int length = strlen(phrase);
	for (i = 0; i < length; i++)  {
		if (isalpha(phrase[i]) && (phrase[i - 1] == ' ')) {
			phrase[i] = toupper(phrase[i]);
		}
		if (isalpha(phrase[0])) {
			phrase[0] = toupper(phrase[0]);
		}
	}
}