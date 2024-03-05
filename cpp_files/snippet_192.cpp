void Capitalise (char *phrase)
{
	int pos = 0;
	while (phrase[pos] != '\0') {
		if ((pos == 0) || (phrase [pos -1] == ' ')) {
			if ((phrase[pos] >= 97) && (phrase[pos] <= 122)) {
				phrase[pos] = (char) (phrase[pos] - ('a' - 'A'));
			}
		}
		pos++;
		
	} return;
}