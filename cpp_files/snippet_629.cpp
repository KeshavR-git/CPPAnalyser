void Capitalise(char* phrase)
{
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = (char)(phrase[0] - 32);
	}
	int count = 1;
	for (int i = 0; i < strlen(phrase); i++){
		if (phrase[i] == 32 && phrase[count] >= 97 && phrase[count] <= 122){
			phrase[count] = (char)(phrase[count] - 32);
		}
		count++;
	}
}