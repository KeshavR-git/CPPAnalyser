void Capitalise(char *phrase){
    
    int len = strlen(phrase);
    int i = 0;
    
    if ((phrase[i]>96)&&(phrase[i]<123)){
        phrase[i] = phrase[i]-32;
    }
    
    while (i<len){
        if ((phrase[i]==32)&&(phrase[i+1]>96)&&(phrase[i+1]<123)){
            phrase[i+1]=phrase[i+1]-32;
        }
        i++;
    }
 
 
}