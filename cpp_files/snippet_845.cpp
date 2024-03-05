void Capitalise(char *phrase)
{
int phraseLen = strlen(phrase);
for (int i = 0; i < phraseLen; i++) {
	if ((i == 0 || phrase[i-1] == ' ') && phrase[i] >= 97 && phrase[i] <= 122) {
		phrase[i] -= 32;
	}
}
}