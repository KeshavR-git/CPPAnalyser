void Capitalise(char *phrase)
{
	int i = 0;

	while (phrase[i] != 0) {
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
			phrase[i + 1] = (phrase[i + 1]) - 32;

			i++;
		}if ((phrase[0] >= 97)&& (phrase[0] <= 122) ){
			phrase[0] = (phrase[0]) - 32;
			i++;
		}
		else {
			i++;
		}

	}

	
}