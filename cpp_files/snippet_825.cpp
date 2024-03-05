void Capitalise(char* pharse) {
    pharse[0] = toupper(pharse[0]);
    int i = 1;
    while (pharse[i] != '\0') {
        if (pharse[i] == ' ') {
            pharse[i + 1] = toupper(pharse[i + 1]);
        }
        i++;
    }    
}