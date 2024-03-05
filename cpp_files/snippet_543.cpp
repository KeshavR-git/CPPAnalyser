void Capitalise(char* phrase){
    int i;
    int c = strlen(phrase);
    
    if ((phrase[0]>96)&&(phrase[0]<123)){
        phrase[0] = (char)((int)phrase[0]-32);
    }
    for (i=0;i<c;i++){
        if ((phrase[i]==' ')&&(phrase[i+1]>96)&&(phrase[i+1]<123)){
            phrase[i+1] = (char)((int)(phrase[i+1])-32);
        }
    }
}