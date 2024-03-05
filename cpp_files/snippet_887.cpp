void Capitalise(char* phrase)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char higher[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index;
	int alpha;
	int length = strlen(phrase);
	char space = ' ';
	for (index = 0; index < length; index = index + 1) {
		for (alpha = 0; alpha < 26; alpha = alpha + 1) {
			if (((index == 0) || (phrase[index - 1] == space)) && (phrase[index] == lower[alpha])) {
				phrase[index] = higher[alpha];
			}
		}
	}
}