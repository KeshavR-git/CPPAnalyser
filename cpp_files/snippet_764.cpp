/*Capitalising the start of each letter*/
void Capitalise(char* phrase)
{
	/*Initialising variables*/
	int a = strlen(phrase);
	int i;

	/*Using a for loop to loop through the length of the string array*/
	for (i = 0;i < a;i++) 
	{
		/*if its the first letter, turn it to uppercase*/
		if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		/*if the position at i is a space then the next letter should be capitalised*/
		else if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}