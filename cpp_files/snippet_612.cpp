void Capitalise(char *phrase){
  int len = strlen(phrase);
  int cap_next = 1;
  for (int i = 0; i < len ; i++) {
    if (cap_next == 1  ) {
      cap_next = 0;
      if (phrase[i] >= 97 && phrase[i] <= 122) {
        phrase[i] -= 32;
      }
    }
    if (phrase[i] == 32){
      cap_next = 1;
    }
  }
}