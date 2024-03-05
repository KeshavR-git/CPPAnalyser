void Capitalise(char* phrase) 
{
    int C,M = 0;
	
	while (phrase[C] != '\0') 
	{
		C++;
	}

        for (; M <= C - 1; M++) 
	{

        if (('a' <= phrase[0]) && ( 'z' >= phrase[0])) {

			phrase[0] = (phrase[0] - ('a' - 'A'));

		}
		if ((( 'a' <= phrase[M] ) && ('z' >= phrase[M])) && (phrase[M - 1] == ' ')) {

			phrase[M] = phrase[M] - ' ';

		}
	}
}