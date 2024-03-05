void Capitalise(char *phrase) {
  phrase[0] = toupper(phrase[0]);
  for(int i =0; i<strlen(phrase); i++) {
    if (phrase[i] == ' ') {
      phrase[i+1] = toupper(phrase[i+1]);
    }
  }
}