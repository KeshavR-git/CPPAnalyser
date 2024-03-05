void Capitalise(char *phrase){
  char sent[1000];

  strcpy(sent, phrase);

  for(int i = 0; i <= strlen(sent); i++){
    if(i == 0 || sent[i-1] == 32){
      if(sent[i] <= 122 && sent[i] >= 97){
        sent[i] -= 32;
      }
    }
  }
  strcpy(phrase, sent);
}