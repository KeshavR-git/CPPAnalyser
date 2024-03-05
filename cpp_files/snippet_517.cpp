void Capitalise(char *phrase)
{
	int i;
	int len = strlen(phrase);

	for (i=0;i<len;i++) {
		if (i==0 && 97 <= phrase[i] && phrase[i] <= 122) {
			phrase[i]=phrase[i]-32;
		} else if (97 <= phrase[i] && phrase[i] <= 122 && phrase[i-1] == ' ') {
			phrase[i] = phrase[i]-32;
		}
	}
}