void Capitalise(char* phrase) {

    int length = strlen(phrase) - 1;

    // capitalise the first character
    if ((phrase[0] >= 'a' && phrase[0] <= 'z')) {
        phrase[0] = phrase[0] - 32;
    }

    for (int i = 0; i <= length; i++) {
        if (phrase[i] == ' ') // if a space is found, capitalise the next character 
        {
            if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
                phrase[i + 1] = phrase[i + 1] - 32;
            }
        }
    }
}