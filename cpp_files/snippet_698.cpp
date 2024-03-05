void Capitalise(char* phrase)
{
	int i=0;

	while (phrase[i] != '\0') {
		if (phrase[i] < 123 && phrase[i]>96) {
			if (phrase[i - 1] == 32 || i==0)
				phrase[i] = phrase[i] - 32;
			
			
		};
		i++;
	};
}