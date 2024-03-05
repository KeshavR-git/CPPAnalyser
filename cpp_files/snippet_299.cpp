void MakeCap(char* phrase, int pos);


void Capitalise(char* phrase) {

	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if (i == 0) {
			MakeCap(phrase, 0);
		}
		else if (phrase[i - 1] == ' ') {
			MakeCap(phrase, i);
		}
	}

}


void MakeCap(char* phrase, int j)
{
	if (phrase[j] <= 122 && phrase[j] >= 97) {
		phrase[j] = (char)(phrase[j] - (32));
	}
}