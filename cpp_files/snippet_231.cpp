void Capitalise(char *phrase)
{
	for (int i=0; i<strlen(phrase); i++){
		if((i==0||phrase[i-1]==' '||phrase[i-1]=='\n')&&'a'<=phrase[i] && phrase[i]<='z'){
			// letter is lowercase
			phrase[i]=phrase[i]-32; // convert to uppercase
		}
	}
}