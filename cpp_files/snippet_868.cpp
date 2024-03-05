void Capitalise(char *phrase)
{
   int length = strlen(phrase);
   int i = 0;
   int wordIndicator = 1;


   while (i < length){
       if(phrase[i] >= 'a' && phrase[i] <= 'z' && wordIndicator == 1){
           phrase[i] = phrase[i] - 32; 
           wordIndicator = 0; 
       }else if (phrase[i] == ' '){ //detect if a second word is going to start
           wordIndicator = 1; 
           }else if(phrase[i] >= 'A' && phrase[i] <= 'Z'){ //turn the indicator back to
           // 0 if the first word is alrealy capitalised 
           wordIndicator = 0;
           }
       i++;
   }
}