void Capitalise(char *phrase)
{
   int i, length;
   length = strlen(phrase);
  
   for ( i = 0 ; i < length ; i++ ){
       if ((phrase[i] >= 97)&&(phrase[i] <= 122))
       {
          if ((phrase[i-1] == 32)||(phrase[i-1] == 0))
          {
             phrase[i] = phrase[i] - 32;
          }
       }
   }
}