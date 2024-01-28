#include <iostream>
#include <string>
#include <vector>
using namespace std;


class StreetParking
{
public:
	int freeParks(string street)
	{
		int length = street.size();
		int p=0; //place for parking
		for( int i=0;i<length;i++)
		{
			//conditions
			if(street[i]!='D' && street[i]!='B' && street[i+1]!='B' && street[i+2]!='B' && street[i]!='S' && street[i+1]!='S' && street[i-1]!='S')
			{
				p=p+1;
			}
			else
			{
				p=p;
			}
		}
		return p;

	}
};