void Capitalise(char* phrase)
{
	int k = 0;
	while (phrase[k] != '\0') {
		k++;
	}

	for (int j=0;j<k;j++)
	{
		if ((((phrase[j - 1] == ' ') || (j==0))) && (phrase[j] <123 && phrase[j] > 96))
		{
			phrase[j] = phrase[j] - ('a' - 'A');
		}
	}

}