void Capitalise(char *phrase) {
   
   int i;
   
   for(i=0;i<=strlen(phrase);i++){
       
       if ((phrase[i] == 32) && ((phrase[i+1] > 96) &&(phrase[i+1] <= 122))) {
         phrase[i+1]=phrase[i+1]-32;
       } 
   }
   
   // dealing with first element 
   if ((65 <= phrase[0]) && (phrase[0] <= 90)){
           phrase[0] = phrase[0];
       } else if(( 90 <phrase[0]) || (phrase[0]> 65)) {
           phrase[0] = phrase[0]-32;
       }
}