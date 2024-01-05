#include <string>
using namespace std;
int XX_MARKER_XX;
 
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
  	int size = street.length();
  	int num = 0;
  	bool added = false;

  	for (int i = 0; i < size; ++i)
  	{
  		/* code */
  		added = false;

  		if ( street[i] == '-')
  		{
  			/* code */
  			if ( i < size )
  			{
  				/* code */
  				if ( street[i+1] != 'B' && street[i+1] != 'S')
  				{
  					/* code */
  					if ( i < size-1 )
  					{
  						/* code */
  						if ( street[i+2] != 'B' )
  						{
  							/* code */
  							num++;
  							added = true;
  						}
  					}else{
  						num++;
  						added = true;
  					}
  				}
  			}

  			if( i > 0 ){
  				if ( street[i-1] == 'S' && added)
  				{
  					/* code */
  					num--;
  				}
  			}
  		}
  	}
    return num;  // return your result
  }
};
