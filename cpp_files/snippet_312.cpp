void Capitalise(char* phrase) {

	// Initial charge for first letter
	int upperCharge = 1;

	// -32 turns from uppercase to lowercase

	for (int i = 0; i < strlen(phrase); i++) {

		// when there is a space, give the program an "upper charge" which will be used on the next letter as long as it is not a space
		if (phrase[i] == 32) {
			upperCharge = 1;
		}
		else if (upperCharge == 1 && phrase[i] > 93) {
			// charge used, now have no charges
			phrase[i] -= 32;
			upperCharge--;
		}
		else if (upperCharge == 1 && phrase[i] < 93) {
			// capital letters eat the charge with no effect on them
			upperCharge--;
		}
	}
}