void Capitalise(char* phrase) {
	int loop = 1;
	int i = 0;
	char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int caps = 1;
	while (loop) {
		if (phrase[i] != 0) {
			if (caps) {
				for (int x = 0; x < 27; x++) {
					if (tolower(phrase[i]) == abc[x]) {
						caps = 0;
						phrase[i] = toupper(phrase[i]);
						break;
					}
				}
				i++;
			}
			else {
				if (phrase[i] == ' ') caps = 1;
				i++;
			}
		}
		else {
			loop = 0;
		}
	}
}