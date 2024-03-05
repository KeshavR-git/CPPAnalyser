void Capitalise(char *phrase)
{
int i;
int j = strlen(phrase);
for (i=0;i<j;i++)
{

	if ((phrase[i-1] ==' ')||(phrase[i]==phrase[0]))
	{
		phrase[i] = toupper(phrase[i]);
	}
	
}

}