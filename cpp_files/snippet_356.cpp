void Capitalise(char *phrase){
  int i,len;
  len = strlen(phrase);
  if(phrase[0]>96 && phrase[0]<123){
    phrase[0] = phrase[0] - 32;
  }
  for(i=1;i<len;i++){
    if(phrase[i]>96 && phrase[i]<123 && phrase[i-1]==32){
      phrase[i] = phrase[i] - 32;
    }
  } 
}