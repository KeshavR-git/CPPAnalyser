void Capitalise(char *phrase){
	for (int i=0;i<strlen(phrase);i++){ 
	if ((phrase[i-1]==32||i==0)&&(phrase[i]>=97&&phrase[i]<=122)){
	phrase[i]-=32;
	}
	}
}