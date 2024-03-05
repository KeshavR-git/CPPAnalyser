void Capitalise(char *phrase)
{
    int prevCharacterSpace = 1;
    for (int i = 0; i < strlen(phrase); i++) {
        if (prevCharacterSpace) {
            if (97 <= phrase[i] && phrase[i] <= 122) // Check it's a lowercase character
                phrase[i] -= 32;
            prevCharacterSpace = 0;
        }
        else if (phrase[i] == ' '){
            prevCharacterSpace = 1;
        }
    }
}