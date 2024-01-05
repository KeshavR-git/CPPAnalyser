#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

 
class StreetParking
{
  public:
  int freeParks(string street)
  {
    int res = 0;
    int len = street.length();
    char arr[len];

    for (int i = 0; i < len; i++) 
    { 
        arr[i] = street[i]; 
    } 

    for (int i = 0; i < sizeof(arr); i++)
    {
    	if ( arr[i] == 'B' || arr[i] == 'D' || arr[i] == 'S' || ( arr[i+1] == 'B' || arr[i+2] == 'B' ) || ( arr[i+1] == 'S' || arr[i-1] == 'S' )) 
    	{
    		res = res;
    	}
     	else
     	{
     		res ++; 
     	}
    	
    }
    return res;  
  }
};