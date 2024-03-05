void helper(char *string, int index) {
	string[index] = string[index] - 32; 

}
void Capitalise(char* phrase) { // space will equal 32
	int i = 0;
	if ((phrase[i] <= 122) && (phrase[i] >= 97)) {
		helper(phrase, 0);
	}
	else if ((phrase[i] > 122) || (phrase[i] < 97)) {
		phrase[i] = phrase[i];
	}
		for (i = 0; i <= strlen(phrase); i++) {
			if (phrase[i] == 32) { //Needs to check for spaces, and ignore them
			phrase[i] = phrase[i];
				if ((phrase[i + 1] <= 122) && (phrase[i + 1] >= 97)) {//if its a lower case letter after space
				i++;
				helper(phrase, i);
				}
				else if ((phrase[i + 1] > 122) || (phrase[i + 1] < 97)) { //ignore non-lower case letters
				phrase[i] = phrase[i];
				}
			}
			else { //ignore lower case
			phrase[i] = phrase[i];
			}
		}
}