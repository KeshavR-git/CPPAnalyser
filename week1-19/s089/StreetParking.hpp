#include <iostream>
#include <string>

class StreetParking
{
public:
	int freeParks(std::string street)
	{
		for(int i=0; i<street.size(); i++)
		{
			char c = street[i];

			switch(c)
			{
				case 'S':
					if( (i-1) >=0 )
						street[i-1] = 'X';

					if( (i+1) < street.size() )
						if(street[i+1]=='-')
							street[i+1] = 'X';
					break;

				case 'B':
					if( (i-1) >=0 )
						street[i-1] = 'X';

					if( (i-2) >=0 )
						street[i-2] = 'X';
					break;
			}
		}

		for(int i=0; i<street.size(); i++)
		{
			std::cout << street[i];
		}
		std::cout << std::endl;

		int num_parks = 0;
		for(int i=0; i<street.size(); i++)
		{
			char c = street[i];

			switch(c)
			{
				case '-':
					num_parks++;
			}
		}

		return num_parks;
	}
};