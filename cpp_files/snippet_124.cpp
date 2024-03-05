void Capitalise(char*phrase)
{
    int lenPhrase = strlen(phrase);
    int t = 0;
    int r = phrase[t];
    
    if ((r > 96) && (r < 123)){
        phrase[t] = r - 32;
    }
    
    for (t = 0; t < lenPhrase; t++){
        
        r = phrase[t];
        int s = phrase [t+1]; 
        
        if ((r == 32) && (s > 96) && (s < 123))
        {
            phrase[t+1]= phrase[t+1]-32;
        }
    }

}