// 10.3
// Author: Lampard Liu

void Capitalise(char *phrase)
{

	if (phrase[0] >= 97 && phrase[0] <= 122)
	{
		phrase[0] = (char)(phrase[0] - ('a' - 'A'));
	}
	int noon = 1;
	for (int i = 0; i < strlen(phrase); i++)
	{
		if (phrase[i] == 32 && phrase[noon] >= 97 && phrase[noon] <= 122)
		{
			phrase[noon] = (char)(phrase[noon] - ('a' - 'A'));
		
		}
		noon ++;
	}
}