void Capitalise(char *phrase)
{
	int i=0;
	phrase[0]= (phrase[0]>=97 && phrase[0]<= 122) ? phrase[0]-32: phrase[0];
	for(i=0;i<strlen(phrase);i++){
		if(phrase[i]==' ' && phrase[i+1]<=122 && phrase[i+1]>=97){
			phrase[i+1]-=32;
		}
	}

}