void Capitalise(char *phrase)
{
int capitalise = 1; 
for(int i = 0; i < strlen(phrase); i++){
	switch (phrase[i])
	{
	case ' ':
		capitalise = 1;
		break;
	case 'a'...'z':
		if (capitalise){
			phrase[i] -= 32;
			capitalise = 0;
		}
		break;
	case 'A'...'Z':
		capitalise = 0;
		break;
	default:
		break;
	}
}

}