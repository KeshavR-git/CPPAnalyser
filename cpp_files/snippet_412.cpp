void Capitalise(char *phrase)
{
	char lowerCase[26] = "abcdefghijklmnopqrstuvwxyz";
	char upperCase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int length = strlen(phrase);

	int i;
	int j;

	for (i = 0; i < length; i++) {
		for (j = 0; j < 26; j++) {
			if ((phrase[i - 1] == ' ' || i == 0) && phrase[i] == lowerCase[j]) {
				phrase[i] = upperCase[j];
			}
		}
	}
}