void Capitalise(char *phrase)
{
	int stringlength = strlen(phrase);
	int pos1, pos2;
	if (((int)phrase[0] >= 97) && ((int)phrase[0] <= 122)) {
		phrase[0] = (char)((int)phrase[0] - 32);
	}

	for (int z = 0; z < stringlength-1; z++) {
		pos1 = phrase[z];
		pos2 = phrase[z + 1];
		if (( pos1 == 32) && (pos2 != 32)) {
			if ((pos2 >= 97) && (pos2 <= 122)) {
				phrase[z + 1] = (char)((int)phrase[z + 1] - 32);
			}
		}
	}
}