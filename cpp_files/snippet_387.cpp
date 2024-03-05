char CharacterCapitalise(char firstLetter) {

	if (firstLetter >= 97 && firstLetter <= 122)
		firstLetter -= 32;

	return firstLetter;
}
void Capitalise(char *phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++) {
		if (i == 0 || phrase[i - 1] == 32) {
			phrase[i] = CharacterCapitalise(phrase[i]);
		}
	}

}