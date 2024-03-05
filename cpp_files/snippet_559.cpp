void Capitalise(char *phrase)
{ int i = 0; 
  int j = strlen (phrase);
  while (i <= (j-1)){
	  if (((phrase[i-1]==' ')||(i==0)) && ((phrase[i]>='a') &&(phrase[i]<='z'))){
	  phrase[i]=phrase[i]-32;}
	  i++;}
}