void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

void Capitalise(char* phrase)
{
	//Boolean indicating that a new phrase is starting
	int phraseStart = 1;
	int i = 0;

	while (phrase[i] != '\0') {
		//Capatilise if start of phrase.
		if (phraseStart) {
			MakeCap(phrase, i);
			phraseStart = 0;
		}

		//Spaces indicate start of new phrase.
		//Update phraseStart if space is encountered.
		if (phrase[i] == ' ') {
			phraseStart = 1;
		}
		i++;
	}

}