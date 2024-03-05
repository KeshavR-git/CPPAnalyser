void Capitalise(char *phrase)
{
	int i;
	for (i=0; phrase[i]!='\0'; i++) {
		if (((phrase[i]==' ') && (phrase[i+1] != ' ')) && (phrase[i+1] - 32 > 63)) {
			phrase[i+1] = phrase[i+1] - 32;
		} else if ((phrase[0]!=' ') && (phrase[0] - 32 > 63)) {
			phrase[0] = phrase[0] - 32;
		}
	}
}