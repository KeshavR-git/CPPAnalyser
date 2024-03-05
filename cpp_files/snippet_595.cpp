int CheckCharacter(char character)
{
    if (character >= 'a' && character <= 'z') {
        return 1;
    }
    else {
        return 0;
    }
}

void Capitalise(char *phrase)
{
    int wordLength = strlen(phrase);
    int i = 1;
    int valid = 0;

    int first_character = CheckCharacter(phrase[0]);

    if (first_character) {
        phrase[0] = phrase[0] - 32;
    } else {
        phrase[0] = phrase[0];
    }

    while (i < wordLength) {
        if (phrase[i] == ' ') {
            valid = CheckCharacter(phrase[i + 1]);
            if (valid) {
                phrase[i + 1] = phrase[i + 1] - 32;
            }
            else {
                phrase[i + 1] = phrase[i + 1];
            }
        }
        i++;
    }
}