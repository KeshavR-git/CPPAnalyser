void Capitalise(char *phrase)
{
    int i;
    int convert;
    
    // scan each strings
    for (i=0; i<= strlen(phrase); i++){
        // find words lowercase alphabets
        if (phrase[i]>=(int)97 && phrase[i]<=(int)122){
            
            // convert formula by -32.
            convert = (int) phrase[i]-32;
            
            // possibility 1. the very first letter of the str
            if (i==0){
                // convert
                phrase[i] = (char)convert;
            // possibility 2. the first letter of word str
            }else if (phrase[i-1]==(int)32){
                // convert
                phrase[i] = (char)convert;
            }
        }

}
}