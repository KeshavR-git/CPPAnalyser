void Capitalise(char *phrase) {
    int i = 0;
    int count = 0;
    int capital = 0;

    while (phrase[i] != 0) {
        count++;
        i++;
    }   

    for (i=0; i<count;i++) {
        
            if ((phrase[i] > 96) && (phrase[i] < 123) && (capital == 0) && (phrase[i] != 32)) {
                capital = 1;
                phrase[i] = phrase[i] - 32;
            }

            else if ((phrase[i] > 64) && (phrase[i] < 91) && (phrase[i] != 32) && (capital == 0)) {
                capital = 1;
            }

            else if (phrase[i] == 32) {
                capital = 0;
            }

    }

}