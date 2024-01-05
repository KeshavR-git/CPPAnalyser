#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class StreetParking
{
  public:
  	int freeParks(string street)
	{
   	
   	int size = street.size();
   	int count=0;

   	for (int i = 0; i < size; ++i)
   	{
      //gets rid of the spots to park if they 
   		switch	(street[i])
   		{
   		case 'B' :
   			if (street[i-2] == '-'){street[i-2] = 'x';}
   			if (street[i-1] == '-'){street[i-1] = 'x';}
   			break;
   		case 'S' :
   			if (street[i+1] == '-'){street[i+1] = 'x';}
   			if (street[i-1] == '-'){street[i-1] = 'x';}
   			break;
   		}
   	}
    
    for (int i = 0; i < size; ++i)
    {

    	if (street[i] == '-')
    	{
    		count++;
    	}

    }

    return count;

	}
	
};