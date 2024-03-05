void Capitalise(char *phrase){   

    //Find length of phrase
    int i = 0, numPhrase = 0;
    while (phrase[i] != '\0') {
        i++;
        numPhrase++;
    }

    //If the character is a-z, and has a space or no character before it, capitalise it. 
    int j;
    for (j=0;j<numPhrase;j++) {
        if ((phrase[j]>=97) && (phrase[j]<=122)) {
            if ((phrase[j-1] == ' ') || (phrase[j-1] == 0)){
                phrase[j] -= 32;
            }
        }
    }
}