void Capitalise(char *phrase){
    int i = 0;
    int counter = 0;

    while (phrase[i] != '\0'){
        counter++;
        i++;
    }


    if ((phrase[0] >= 97) && (phrase[0] <= 122)){
            phrase[0] = phrase[0] - ('a' - 'A');
        }

    for (i = 0; i < counter; i++){
        if ((phrase[i] == ' ') && (phrase[i+1] >= 97) && (phrase[i+1] <= 122)){
            phrase[i+1] = phrase[i+1] - ('a' - 'A');
        }
    }

}