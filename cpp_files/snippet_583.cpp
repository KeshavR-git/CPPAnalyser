void Capitalise(char *phrase)
{
	// if first element is lowercase, capitalise it
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] = phrase[0] - 32;
	}

	// for loop that scans from the 2nd element to the last
	for (int i = 1; i <= strlen(phrase) - 1; i++) {

		// if loop that tests if the element before the current element is a space
		if (phrase[i - 1] == 32) {

			// if loop that tests if the element is a lowercase letter
			if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
				
				// capitalising the letter if all the loops are satisfied
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}