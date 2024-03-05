void Capitalise(char* phrase)
{
	int i;

	for (i = 0; phrase[i] != '\0'; i++) { // Looking for where there values are not null. 
		if (phrase[i] == ' ') { // Looking for a space, if there is a space, add one to i to get the character after.
			i++;
			if ((phrase[i] <= 'z') && (phrase[i] >= 'a')) { // Letter after the space, then minus 32 to get the capitalised letter.
				phrase[i] = (phrase[i] - 32); // 32 Difference between capital and lower case. 
			}
		}
		if (i == 0) {// The first value of the string must be capitalised.
			if ((phrase[i] <= 'z') && (phrase[i] >= 'a')) {
				phrase[i] = (phrase[i] - 32);
			}

		}
	}
}