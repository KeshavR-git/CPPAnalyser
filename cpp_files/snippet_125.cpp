void Capitalise(char *phrase)
{
	int i;
	int len = strlen(phrase);
	int word=0;
	char *copy = (char*)malloc(len + 1);
	for (i=0; i<=len; i++){
		char ch =  phrase[i];
		copy[i] =ch;
	}
	for(i=0;copy[i]!='\0';i++){
		if(copy[i]==' '){
			word=0;
		}
		else if(isdigit(copy[i])){
			word=0;
		}
		else if(copy[i]=='-'){
			word=1;
		}
		else if(ispunct(copy[i])){
			word=0;
		}
		else if(word==0){
			if(isupper(copy[i])){
				word=1;
				copy[i]=copy[i];
			}
			else{
				word=1;
				copy[i]=copy[i]-32;
			}

		}
	}
	copy[len] = 0;
	strcpy(phrase, copy);
	free(copy);
}