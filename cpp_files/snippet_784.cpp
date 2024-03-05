void Capitalise(char* phrase)
{
	//printf("original string is %s \n", phrase);
	int length = strlen(phrase);
	int i = 0;
	int flag = 0;
	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			if (phrase[i] <= 122 && phrase[i] >= 97)
			{
				phrase[i] = phrase[i] - 32;
			}
		}
		else
		{
			if (phrase[i] == ' ' && flag == 0)
			{
				flag = 1;
				continue;
			}
			else
			{
				if (flag == 0)
				{
					continue;
				}
				else
				{
					if (phrase[i] <= 90 && phrase[i] >= 65)
					{
						flag = 0;
						continue;
					}
					else if (phrase[i] <= 122 && phrase[i] >= 97)
					{
						phrase[i] = phrase[i] - 32;
						flag = 0;
					}
					else
						continue;
				}
			}
		}
	}
	//printf("now string is %s \n", phrase);
}