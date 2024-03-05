void Capital(char *phrase, int position) {
	if ( (phrase[position] >= 97) && (phrase[position] <= 122) ) {
		phrase[position] -= 32;
	}
}

void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	int i;

	Capital(phrase, 0);
	
	for (i = 0; i < length; i++) {
		if (phrase[i] == 32) {
			Capital(phrase, i+1);
		}
	}
}