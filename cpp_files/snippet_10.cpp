void capital(char *phrase, int index){

	if (phrase[index] >= 97 && phrase[index] <= 122){
		phrase[index] -= 32;
	}
}

void Capitalise(char *phrase)
{
	int i;

	capital(phrase, 0);
	for (i = 0; i < 100; i++){
		if (phrase[i] == 32 && phrase[i + 1] != 32){
			capital(phrase, i+1);
		}
	}
}