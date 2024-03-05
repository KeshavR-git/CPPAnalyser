void Capitalise(char *phrase){
    
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            if (phrase[i] >= 97 && phrase[i] <= 122) {
                phrase[i] = (char)(phrase[i] - ('a' - 'A'));
            }
        }
        else if (phrase[i-1] == ' ') {
            if (phrase[i] >= 97 && phrase[i] <= 122) {
                phrase[i] = (char)(phrase[i] - ('a' - 'A'));
            }
            
        }
    i++;
    }  
}