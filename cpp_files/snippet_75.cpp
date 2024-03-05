void Capitalise(char *phrase) {

    for (int i=0; phrase[i] != '\0'; i++) {
        if (i == 0 || phrase[i-1] == ' ') {
            if (phrase[i] >= 97 && phrase[i] <= 122) {
                phrase[i] = (char)(phrase[i] - ('a' - 'A'));
            } 
        } 
    }
}