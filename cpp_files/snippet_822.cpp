void Capitalise(char* phrase) {
	int i = 0;
	while (phrase[i] != '\0') {
		if ((phrase[i - 1] == ' ')||(i==0)) {
			if (phrase[i] == 'a') {
				phrase[i] = 'A';
			}
			if (phrase[i] == 'b') {
				phrase[i] = 'B';
			}
			if (phrase[i] == 'c') {
				phrase[i] = 'C';
			}
			if (phrase[i] == 'd') {
				phrase[i] = 'D';
			}
			if (phrase[i] == 'e') {
				phrase[i] = 'E';
			}
			if (phrase[i] == 'f') {
				phrase[i] = 'F';
			}
			if (phrase[i] == 'g') {
				phrase[i] = 'G';
			}
			if (phrase[i] == 'h') {
				phrase[i] = 'H';
			}
			if (phrase[i] == 'i') {
				phrase[i] = 'I';
			}
			if (phrase[i] == 'j') {
				phrase[i] = 'J';
			}
			if (phrase[i] == 'k') {
				phrase[i] = 'K';
			}
			if (phrase[i] == 'l') {
				phrase[i] = 'L';
			}
			if (phrase[i] == 'm') {
				phrase[i] = 'M';
			}
			if (phrase[i] == 'n') {
				phrase[i] = 'N';
			}
			if (phrase[i] == 'o') {
				phrase[i] = 'O';
			}
			if (phrase[i] == 'p') {
				phrase[i] = 'P';
			}
			if (phrase[i] == 'q') {
				phrase[i] = 'Q';
			}
			if (phrase[i] == 'r') {
				phrase[i] = 'R';
			}
			if (phrase[i] == 's') {
				phrase[i] = 'S';
			}
			if (phrase[i] == 't') {
				phrase[i] = 'T';
			}
			if (phrase[i] == 'u') {
				phrase[i] = 'U';
			}
			if (phrase[i] == 'v') {
				phrase[i] = 'V';
			}
			if (phrase[i] == 'w') {
				phrase[i] = 'W';
			}
			if (phrase[i] == 'x') {
				phrase[i] = 'X';
			}
			if (phrase[i] == 'y') {
				phrase[i] = 'Y';
			}
			if (phrase[i] == 'z') {
				phrase[i] = 'Z';
			}
		}
		i++;
	}
}