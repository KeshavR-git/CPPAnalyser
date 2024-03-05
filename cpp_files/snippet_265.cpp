void Capitalise(char *phrase) 
{
    int i;
    int length;

    length = strlen(phrase);

    for (i = 0; i <= length; i++) {

        if (i == 0) {
            if (phrase[i] >= 'a' && phrase[i] <= 'z') {
                phrase[i] = phrase[i]- 32;

            }
        } else if (phrase[i] == ' ') {
            if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
                phrase[i + 1] = phrase[i + 1] - 32;

            }
        }
    }

}