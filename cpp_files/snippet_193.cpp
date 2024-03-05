void Capitalise(char *phrase)
{
	//find the length of the phrase
	int length = strlen(phrase);
	int i; 

	//for loop to index each element 
	for(i=0;i<length;i++){
		if((phrase[i]<123)&&(phrase[i]>96)){ //if lowecase alphabet character
			if(i==0){
				phrase[i]=phrase[i]-32; 
			}else if((phrase[i]!=' ')&&(phrase[i-1]==' ')){
				phrase[i]=phrase[i]-32;
			}
		}
	}
}