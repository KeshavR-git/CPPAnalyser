void Capitalise (char* phrase) {
    int k;
    int m = strlen(phrase);
    
    for (k=0; k < m; k++) { 
        if (isalpha(phrase[k]) && ((phrase[k-1]==' ') || phrase [k-1] == phrase[-1])) {
            phrase[k]=toupper(phrase[k]);
        }

        
    }
}