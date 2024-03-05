void Capitalise(char *phrase) {
  int i;
  for (i = 0; i <= strlen(phrase) - 1; i++) {
    if (i == 0) {
      phrase[i] = toupper(phrase[i]);
    }else if (phrase[i] == 32) {
      phrase[i+1] = toupper(phrase[i+1]);
    } 
  }
  return;
}