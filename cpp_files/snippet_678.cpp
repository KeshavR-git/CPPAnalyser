void Capitalise(char *phrase)
{
	int i,length;
	length = strlen(phrase);
	for(i=0;i<length;i++){
		if((i==0)&&(phrase[i]<=122)&&(phrase[i]>=97)){
			phrase[i] = phrase[i]-32;
		}else if(phrase[i]==32){
			if((phrase[i+1]<=122)&&(phrase[i+1]>=97)){
				phrase[i+1]=phrase[i+1]-32;
			}
		}

	}
}