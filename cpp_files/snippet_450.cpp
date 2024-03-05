// capitalise any element
void MakeCap(char* phrase, int pos)
{
    if (phrase[pos] >= 97 && phrase[pos] <= 122) {
        phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
    }
}

// capitalise each word in the phrase
void Capitalise(char* phrase)
{
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            MakeCap(phrase, 0);  // Always capitalise the first letter of the phrase.
        }
        else if (phrase[i - 1] == ' ') {
            MakeCap(phrase, i);  // capitalise a letter if before it is a space.
        }
        i++;
    }
}