void Capitalise(char *phrase)
{
int i ;
int length;

length = strlen(phrase);

          for (i=1; i<length; i++) {
              if ((phrase[i-1]==' ') && (phrase[i]>='a') && (phrase[i]<='z')){
                  phrase[i]= phrase[i] - ('a'-'A');
              }
          }

if ((phrase[0]>='a')&&(phrase[0]<='z')){
    phrase[0]= phrase[0] - ('a'-'A');
}
}