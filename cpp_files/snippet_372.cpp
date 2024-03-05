// EXERCISE 3
void Capitalise(char* phrase)
{
	int i;
	int length = 0;
	phrase[0] = toupper(phrase[0]);
	while (phrase[length] != '\0') {
		length++;
	}
	for (i = 0; i < length; i++) {
		 if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}