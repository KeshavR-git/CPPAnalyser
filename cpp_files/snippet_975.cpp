void Capitalise (char *phrase)
{
  int len = 0;
  while (phrase[len] != '\0')
    {
      len++;
    }
    

  for(int i = 0; i<len; i++){
      if(i == 0){
          if (phrase[i] >= 97 && phrase[i] <=122){
              phrase[i] = toupper(phrase[i]);
          }
      }
      if (phrase[i] == 32)
    {
      int nextOne;
      nextOne = i + 1;
      if (phrase[nextOne] >= 97 && phrase[nextOne] <=122){
      phrase[nextOne] = toupper(phrase[nextOne]);
      }

    }
  }
  }