void Capitalise(char *phrase){
  int i,c;
  char j;
  c = strlen(phrase);
  for(i = 0; i < c; i++){
    if((phrase[0] >= 'a')&&(phrase[0] <= 'z')){
      j = phrase[0];
      phrase[0] = toupper(j);
    }
    if(((phrase[i] == ' ')&&(phrase[i+1] >= 'a')&&(phrase[i+1] <= 'z'))){
      j = phrase[i+1];
      phrase[i+1] = toupper(j);
    }
  }
}