void Capitalise (char *phrase)
{
	int i;
	int length = strlen(phrase);
	
	for (i = 0; i <= length; i++) {
		if ((phrase[i] > 96) && (phrase[i] < 123)) {
			if ((i == 0) || (phrase[i - 1] == 32)) {
				// Upper(&phrase[i]);
				phrase[i] -= 32;
			}
		}
	}
}