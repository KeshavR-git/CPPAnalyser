void Capitalise(char* phrase) {
	int i = 0;
	// Let's create an array that will register how many words there are in the char array
	while (phrase[i] != '\0') {
		i++;
	}
	//This should register how many words there are in the phrase array
	//This is to check
	//printf("%d", i);
	//We use the word 'Hi' to test what is the value of i, and the output is as expected 
	//which is 2.
	//A reminder that the letter H is in array 0, i is in array 1, and '\0' is in array 2.

	for (int j = 0; j < i; j++) {
		// Let's generate ideas on what to do with the current progress that we have.
		// Now we know the length of the array, next thing we need to do is to change 
		// Each of the first letter of the word inside the sentence into a capital
			if (phrase[j] == ' ' && phrase[j + 1] != ' ') {
				if (phrase[j+1] > 96 && phrase [j+1] < 123) {
				phrase[j + 1] = phrase[j + 1] - 32;
				}
			}
	}

	// Next thing is we know that the first word would have a different condition set 
	// So if the first letter is not a ' ', we would need to change it to a capital as well
	if (phrase [0] > 96 && phrase [0] < 123){
		if (phrase[0] != ' ') {
			phrase[0] = phrase[0] - 32;
		}
	}


	


}