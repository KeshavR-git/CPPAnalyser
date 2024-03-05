void Capitalise(char* phrase)
{
	int l = 0;
	int j;
	int Do = 1;

	while (phrase[l] != '\0') {
		l++;
	}

	for (j = 0;j < l;j++) {

		if (Do == 1 && phrase[j] != ' ') {

			if (phrase[j] >= 'a' && phrase[j] <= 'z') {

				phrase[j] -= 32;

			}

			Do = 0;
				 
		} 

		if (phrase[j] == ' ') {

			Do = 1;

		}

	}

	return;
    
}