void Capitalise(char *phrase){
   int i;
   for(i = 0; phrase[i] !='\0'; i++) {
      if ((i == 0 && phrase[i] != ' ' )|| (phrase[i] != ' ' && phrase[i-1] == ' ')) {
         if(phrase[i] >= 'a' && phrase[i]<='z') {
            phrase[i] = (char)(('A'-'a') + phrase[i] );
         }
      } 
   }
}