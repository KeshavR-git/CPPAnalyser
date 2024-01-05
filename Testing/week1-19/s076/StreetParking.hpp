#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstddef>
using namespace std;
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(string Street)
	{
		int counter =0;

		size_t foundS = Street.find_first_of("S");
  		while (foundS!=string::npos)
  		{
    		Street[foundS]='*';
        if (Street[foundS-1] == 'B')
        {
          
        }
        else
        {
          Street[foundS-1] = '*';
        }

        if (Street[foundS+1] == 'S')
        {
          
        }
        else
        {
          Street[foundS+1] = '*';
        }
    		
    		
    		foundS=Street.find_first_of("S",foundS+1);
  		}

  		size_t foundB = Street.find_first_of("B");
  		while (foundB!=string::npos)
  		{
    		Street[foundB]='*';
    		Street[foundB-1] = '*';
    		Street[foundB-2] = '*';
    		foundB=Street.find_first_of("B",foundB+1);
  		}

  		size_t foundD = Street.find_first_of("D");
  		while (foundD!=string::npos)
  		{
    		Street[foundD]='*';
    		foundD=Street.find_first_of("D",foundD+1);
  		}

		cout<<Street<<endl;

		for (int i = 0; i < Street.length(); ++i)
		{
			if (Street[i]!='*')
			{
				counter++;
			}
		}
		return counter;
	}
	
};