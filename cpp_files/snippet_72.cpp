void Capitalise(char *phrase)
{
	for (int x = 97; x <= 122; x++) {
		if (phrase[0] == x) {
			phrase[0] -= 32;
		}
	}
	for (int i = 0; i < 1000; i++) {
		if (phrase[i-1] == 32) {
			for (int y = 97; y <= 122; y++) {
				if (phrase[i] == y) {
					phrase[i] -= 32;
				}
			}
		}
	}
}