void Capitalise(char *phrase) {
   int i;
   for(i = 0; i<100; i++) {
      if ((i == 0 && phrase[i] != 32) || (phrase[i] != 32 && phrase[i-1] == 32)) {
        if ((phrase[i] >= 97) && (phrase[i]<= 122)){
            phrase[i] = phrase[i] - 32 ;
        } 
      } 
    
   }
   return ;
}