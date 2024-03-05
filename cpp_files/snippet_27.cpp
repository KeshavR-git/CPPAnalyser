void Cap(int index, char *phrase)
{
    // Capiitilising an element of array
    if ((phrase[index] >= 'a') && (phrase[index] <= 'z')) {
        phrase[index] = phrase[index] - ('a' - 'A');
    }
}

void Capitalise(char *phrase)
{
    // Initialising variable
    int i = 0;
    int length = strlen(phrase) - 1;

    // Changing first character to capital
    Cap(i, phrase);

    // First letter of each word converted to capital
    for (i = 1; i < length; i++) {
        if (phrase[i - 1] == ' ') {
            Cap(i, phrase);
        }
    } 
}