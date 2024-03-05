void Capitalise(char *phrase)
{
  int length = strlen(phrase);
  
  for(int i=0;i<length;i++)
  {
      if(i==0) 
      {
          phrase[i]=toupper(phrase[i]);
      }
      
      if(phrase[i]==' ')
      {
          phrase[i+1]=toupper(phrase[i+1]);
          
      }
      
  }
  return;
}