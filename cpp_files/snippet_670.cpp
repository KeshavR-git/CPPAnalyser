void Capitalise(char *phrase){
	int i;
	for(i=0; i<strlen(phrase); i++){
		phrase[0]=toupper(phrase[0]);
		if(phrase[i]==' '){
			phrase[i+1]=toupper(phrase[i+1]);
		}
	}
}