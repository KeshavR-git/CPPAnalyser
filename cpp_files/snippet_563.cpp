void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		if ((phrase[i] <= 122 && phrase[i]>=97) && (phrase[i-1]>122 || (phrase[i-1]<65 && phrase[i - 1] != 45)|| (phrase[i-1]<97 && phrase[i-1]>90))) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}