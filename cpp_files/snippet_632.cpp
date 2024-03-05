void Capitalise(char* word) {
	int len = strlen(word);
	int i = 0;
	
	if (word[0] < 123 && word[0] > 96)
	{
		word[0] = word[0] - 32;
	}
	for (i = 1;i < len + 1;i++) {
		if (word[i] == ' ')
		{
			if (word[i + 1] < 123 && word[i + 1] > 96)
			{
				word[i + 1] = word[i + 1] - 32;
			}
		}
	}

}