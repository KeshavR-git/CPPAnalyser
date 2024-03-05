void Capitalise(char* phrase) {
    int i, letter;
    for (i = 0; i < 1000; i++) {
        if (phrase[i] == ' ') {
            letter = phrase[i + 1];
            if ((97 <= letter) && (letter <= 122)) {
                char ch = letter - 32;
                phrase[i + 1] = ch;
            }
        }
    }
    letter = phrase[0];
    if ((97 <= letter) && (letter <= 122)) {
        char ch = letter - 32;
        phrase[0] = ch;
    }
}