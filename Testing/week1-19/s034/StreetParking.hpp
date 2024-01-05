#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(string s)
	{
		 int rest=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='-')
			{
				if(s[i-1]!='S'||i==0)
				{
					if(s[i+1]!='S' || i==s.length()-1 )
					{
						if(s[i+1]!='B' || i==s.length()-1 )
						{
							if(s[i+2]!='B' || i==s.length()-2 )
							{
								rest++;
							}
						}
					}
				}
			}

		}
		
	return rest;
	}
};

// int main()
// {
// 	StreetParking a;
// 	cout<<a.freeParks("------BB-----D--------S--D-BSSS-----B---S-S-SSS---")<<endl;
// 	return 0;

// }