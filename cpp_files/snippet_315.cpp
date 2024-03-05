void Cap(char* word, int pos){
	if ((word[pos] >= 'a') && (word[pos] <= 'z')) {
		word[pos] = (char)(word[pos] -32); 
	}
}
void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != 0) {
		if (i == 0) {
			Cap(phrase, 0);
		}
		else if (phrase[i - 1] == ' ') {
			Cap(phrase, i);
		}
		i++;
	}
}