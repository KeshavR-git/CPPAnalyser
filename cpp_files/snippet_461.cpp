void Capitalise(char* phrase)
{
	int i, newWord=0, ASCII;
	for (i = 0; phrase[i] != '\0'; i++) {
		if (newWord || !i) {
			ASCII = (int)phrase[i];
			if (ASCII >= 97 && ASCII <= 122) {
				ASCII -= 32;
				phrase[i] = (char)ASCII;
			}
			newWord = 0;
		}
		if (phrase[i] == ' ') {
			newWord = 1;
		}
	}
}