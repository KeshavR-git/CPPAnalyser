void Capitalise(char *phrase)
{
	int string = strlen(phrase);
	for (int i=0; i<string;i++){
		if ((phrase[0]<123)&&(phrase[0]>96)){
			phrase[0]=phrase[0]-32;
		}else if (phrase[i]==32){
			if ((phrase[i+1]<123)&&(phrase[i+1]>96)){
			phrase[i+1]=phrase[i+1]-32;
			}
		}
	
    }
}