void Capitalise(char* phrase);
void MakeCapital(char* phrase, int index);

void MakeCapital(char* phrase, int index) {

    phrase[index] -= 32;

}

void Capitalise(char* phrase) {

    int i;
    int a = strlen(phrase);

    if ((phrase[0] <= 122) && (phrase[0] >= 97)) {
        MakeCapital(phrase, 0);
    }
    for (i = 1; i < a; i++) {
        if ((phrase[i] <= 122) && (phrase[i] >= 97)) {
            if (phrase[i - 1] == ' ') {
                MakeCapital(phrase, i);
            }
        }
    }
}