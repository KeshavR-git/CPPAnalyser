void Capitalise(char*phrase)
{
    int lenPhrase = strlen(phrase);
    int t = 0;
    int p = phrase[t];
    
    if ((p > 96) && (p < 123)){
        phrase[t] = p - 32;
    }
    
    for (t = 0; t < lenPhrase; t++){
        
        p = phrase[t];
        int s = phrase [t+1]; 
        
        if ((p == 32) && (s > 96) && (s < 123))
        {
            phrase[t+1]= phrase[t+1]-32;
        }
    }

}