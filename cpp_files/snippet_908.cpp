void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

void Capitalise(char* phrase)
{
	int i;
	i = 1;
	
	MakeCap(phrase,0);

		while (phrase[i] != '\0') {
		    if (phrase[i - 1] == ' ') {
			MakeCap(phrase,i);
			}
			i++;
	     }
		return;
}