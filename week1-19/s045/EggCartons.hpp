class EggCartons
{
public:
	int minCartons(int n)
	{
		if(n<6 || n==10)
		{
			return -1;
		}

		int res = 0;
		int count = 0;

		while(res<=n-8)
		{
			res+=8;
			count++;
		}

		while(res<=n-6)
		{
			res+=6;
			count++;
		}

		if(res==n)
		{
			return count;
		}

		int temp = res;

		for(int i=n; i>=0; i--)
		{
			res=temp-(6*i)+(8*i);

			if(res>temp && res<=n)
			{
				count++;

				if(res==n)
				{
					return count;
				}
			}
		}

		return -1;
	}
};