void Capitalise(char *phrase)
{
    int lenPhrase = strlen(phrase);
    int x = 0;
    int y = phrase[x];
    
    if ((y>96)&& (y<123)){
        phrase[x] = y-32;
    }
    
    for (x= 0; x<lenPhrase; x++){
        
        y = phrase[x];
        int j = phrase [x+1]; 
        
        if ((y ==32) && (j>96) && (j<123))
        {
            phrase[x+1]= phrase[x+1]-32;
        }
    }

}