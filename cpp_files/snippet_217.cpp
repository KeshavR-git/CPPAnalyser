void CapFirst(char* phrase, int pos);
// helper function used in Capitalise function, which will 
// go throuh a word and capitalise the first letter.
void CapFirst(char* phrase, int x)
{
	if (phrase[x] >= 97 && phrase[x] <= 122) {
		phrase[x] = (char)(phrase[x] - ('a' - 'A')); // changing from lowercase to capital
	}
}

//The Capitalise function will take the char input and capitalise the first letter of each 
// word/phrase. 

void Capitalise(char* phrase) {

	int i = 0;
	while (phrase[i] != '\0') {
		if (i == 0) { // capitalising the very first letter
			CapFirst(phrase, 0);
		}
		else if (phrase[i - 1] == ' ') { // capitalising any remaning first letters in char
			CapFirst(phrase, i);
		}
		i++;
	}

}