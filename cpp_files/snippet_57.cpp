void MakeCap(char *phrase, int pos);

void Capitalise(char *phrase) {
    int i = 0;
    int length = 0;

    while (phrase[i] != '\0'){
        i++;
        length++;
    }

    for (i = 1; i < length; i++){
        if ((phrase[i] != ' ') && (phrase[i - 1] ==  ' ')){
            MakeCap(phrase, i);
        }
    }

    if (phrase[0] != ' ') {
        MakeCap(phrase, 0);
    }

}

void MakeCap(char *phrase, int pos){
    if (phrase[pos] >= 97 && phrase[pos] <= 122){
        phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
    }
}