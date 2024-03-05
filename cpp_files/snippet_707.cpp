void Capitalise(char *phrase)
{
	int length = 1000;
	while (phrase[length] != '\0'){
		length--;
	}
	int i=0;
	char letter;
	letter = 0;
	char next = 0;
	while(i < length) {
		letter = phrase[i];
		if ((i == 0) && (96 < phrase[i]) && (phrase[i] < 123)) {
			phrase[i] = (phrase[i] - 32 );
		}
		if ((letter == 32)&&(96 < phrase[i+1])&&(phrase[i+1] < 123)) {
			i++;
			next = phrase[i];
			phrase[i] = (next - 32);
		}
		i++;
	}
}