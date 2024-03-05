void Capitalise(char *phrase){
  int i = 0;
  for (i=0;phrase[i]!='\0';i++) {
    if (i == 0 ||phrase[i-1] == ' '){
      if ((phrase[i]>='a') && (phrase[i]<='z')) {
        phrase[i] = (char)(phrase[i]-32);
      }
    }
  }
}