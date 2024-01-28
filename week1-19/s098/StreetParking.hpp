#include <iostream>
#include <string>
#include <iterator>
using namespace std;


class StreetParking{

	public:
	int freeParks( string street ){

		string::iterator it;
		int parks = 0;

		for( it = street.begin(); it != street.end(); ++it ){

			if( *it == 'D' ){
			
				*it = '*';
			
			} else if( *it == 'B' ){

				*it = '*';
				*(it-1) = '*';
				*(it-2) = '*';

			} else if( *it == 'S' ){

				*it = '*';
				*(it-1) = '*';

				if( *(it+1) == '-' )
					*(it+1) = '*';
			}
		}

		for( it = street.begin(); it != street.end(); ++it ){

			if( *it == '-' )
				parks++;
		}

		return parks;
	}
};
