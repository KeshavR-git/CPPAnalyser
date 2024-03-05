void Capitalise(char *phrase) {
    
  int length = strlen(phrase) - 1;
  for (int i = 0; i <= length; i++) {
    if ((i == 0) && (phrase[i] >= 'a' && phrase[i] <= 'z')) {
      phrase[i] = phrase[i] - 32;
    }
    if ((phrase[i] == ' ') && (phrase[i+1] >= 'a' && phrase[i+1] <= 'z') && (i+1 <= length)) {
      phrase[i+1] = phrase[i+1] -32;
    }
  }
  
}