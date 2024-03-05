// EXERCISE 3
void Capitalise(char *phrase)
{
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] -= 32;
	}

	int i=1;
	while (phrase[i] != 0) {
		if (phrase[i] == 32 && phrase[i+1] >= 97 && phrase[i+1] <= 122 ) {
			phrase[i+1] -= 32;
		}
		i++;
	}
}