void Capitalise(char *phrase) {

    int i = 1;

    if (phrase[0] >= 97 && phrase[0] <= 122) {
        phrase[0] = (phrase[0] - ('a'-'A'));
    }


    while (phrase[i] != '\0') {
        if (phrase[i] >= 97 && phrase[i] <= 122) {
            if (phrase[i-1] == ' ') {
                phrase[i] = (phrase[i] - ('a'-'A'));
            }
        }
        i++;
    }

}