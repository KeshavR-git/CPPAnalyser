#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
public:
	int freeParks(string street)
	{
		int* parking = new int[street.length()];
		int parks = 0;
		for (int i = 0; i < street.length(); ++i) *(parking+i) = 1;
		
 
		for (int i = 0; i < street.length(); i++)
		{
			if(street[i]=='B'&&i>1)
			{
				*(parking+i)=0;
				*(parking+i-1)=0;
				*(parking+i-2)=0;
			}
			else if(street[i]=='B'&&i==1)
			{
				*(parking+i)=0;
				*(parking+i-1)=0;				
			}
			else if(street[i]=='B'&&i==0) *(parking+i)=0;

			if(street[i]=='D') *(parking+i)=0;
			if(street[i]=='S'&&i>0&&i<street.length()-1)
			{
				*(parking+i)=0;
				*(parking+i-1)=0;
				*(parking+i+1)=0;
			}
			else if(street[i]=='S'&&i==0)
			{
				*(parking+i)=0;
				*(parking+i+1)=0;

			}
			else if(street[i]=='S'&&i==street.length()-1)
			{
				*(parking+i)=0;
				*(parking+i-1)=0;
			}
		}
		for (int i = 0; i < street.length(); i++) if(*(parking+i)==1) parks++; 
		

		return parks;
	}
};