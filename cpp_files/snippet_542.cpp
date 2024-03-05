// EXERCISE 3
void Capitalise(char *phrase)
{

	int flag = 0;

	if ((phrase[flag] > 96) && (phrase[flag] <123)){
		phrase[flag] -= 32;}

	for (int i = 0; phrase[i] != '\000'; i++){

		if (phrase[i] == 32){
			flag = i + 1;}
	
		if ((phrase[flag] > 96) && (phrase[flag] <123)){
		phrase[flag] -= 32;}

	}

}