void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	for (int i = 0; i < length; i++) {
		if (((int) phrase[i - 1] == 32)){
			if (((int)phrase[i] >= 97) && ((int)phrase[i] <= 122)) {
				phrase[i] -= 32;
			}
		}
	}
	if (((int)phrase[0] >= 97) && ((int)phrase[0] <= 122)) {
		phrase[0] -= 32;
	}
}