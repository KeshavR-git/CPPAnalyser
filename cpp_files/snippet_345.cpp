void CheckCase(char *phrase, int position);
void Capitalise(char *phrase);

void CheckCase(char *phrase, int position)
{
    if (phrase[position] >= 97 && phrase[position] <= 122) {
        phrase[position] = (char) (phrase[position] - ('a' - 'A'));
    }
}

void Capitalise(char *phrase)
{
    int i = 0;

    while (phrase[i]!= '\0') {
        if (i == 0) {
            CheckCase(phrase, 0);
        }
        else if (phrase[i -1] == ' ') {
            CheckCase(phrase, i);
        }
        i++;
    }
}