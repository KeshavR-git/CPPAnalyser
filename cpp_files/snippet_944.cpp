void Capitalise(char *phrase){
    int i;
    int a=strlen(phrase);
    
    phrase[0]=toupper(phrase[0]);
    
    for(i=1;i<=a-2;i++){
        if(phrase[i-1]==' '){
            phrase[i]=toupper(phrase[i]);
        } 
    }
   
    
}