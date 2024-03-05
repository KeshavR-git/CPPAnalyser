void Capitalise(char* phrase)
{
	int i=0;
	while (phrase[i] != '\0') {
		if  ((phrase[i] > 96) && (phrase[i] < 123)&&((i == 0)||(phrase[i - 1] == ' '))) {
			phrase[i] -= 32;
		}
		i++;
	}
}