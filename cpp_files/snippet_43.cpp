void Capitalise(char* phrase)
{

	int i = 0;
	int lengfull = ((strlen(phrase)) - 1);


	while (i <= lengfull) {
		if ((i == 0) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] = phrase[i] - 32;
		}
		else if ((phrase[(i-1)] == 32) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}

}