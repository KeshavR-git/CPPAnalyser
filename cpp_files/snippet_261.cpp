int convertToCapital(int letter);

int convertToCapital(int letter) {
	return (letter - 32);
}

void Capitalise(char* phrase)
{
	int i = 0; 
	int result;
	int first;
	if (phrase[0] > 96) {
		first = convertToCapital(phrase[0]);
		phrase[0] = (char)first;
	}
	

	while (phrase[i] != 0){
		if (phrase[i] == 32 && phrase[i + 1] < 123 && phrase[i + 1] > 96){
			result = convertToCapital(phrase[i + 1]);
			phrase[i + 1] = (char)result;
			
		}
		i++;
	}
}