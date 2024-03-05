void Capitalise(char *phrase){
    int length;
    int c = 0;
    while (phrase[c] != '\0') {
        c++;
    }
    length=c;
    
    int i;
    for(i=0;i<length;i++){
        if(phrase[i]==' ' && phrase[i+1]>96){
            phrase[i+1]= (phrase[i+1]+('A'-'a'));
        } else if(i==0 && phrase[i]>96){
            phrase[i]= (phrase[i]+('A'-'a'));
        }
    }
}