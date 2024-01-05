#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std ;
int XX_MARKER_XX;


class PartySeats
{
	public:
		// default constructor
		PartySeats() {}

		// arrange the guests clockwise around the table, starting with the HOST
		// must alternate between boys and girls, with the HOSTESS sitting opposite the HOST
		vector<string> seating(vector<string> attendees) {

			vector<string> boys, girls, seatingPlan ;
			string name, gender ;
			int count = 0 ;

			// split the list of attendees into boys and girls
			for (size_t i = 0 ; i < attendees.size() ; i++) {
				
				name = attendees[i].substr( 0, attendees[i].find(" ") ) ;
				gender = attendees[i].substr( attendees[i].find(" ") + 1 ) ;

				if ( gender == "girl") {
					girls.push_back(name) ;
				} else if ( gender == "boy") {
					boys.push_back(name) ;
				} else {
					cout << "ERROR 0x1: Invalid input detected" << endl ;
					return seatingPlan ;
				}

			}

			// there must be a multiple of four guests, with an equal number of boys and girls
			if ( attendees.size()%4 != 0 ) { return seatingPlan ; }
			if ( boys.size() != girls.size() ) { return seatingPlan ; }

			// sort both lists alphabetically
			sort(boys.begin(), boys.end()) ;
			sort(girls.begin(), girls.end()) ;

 			// create seating plan using sorted lists
 			// add the host and the first half of the guests
			seatingPlan.push_back("HOST") ;
			while ( count < ( attendees.size() / 4 ) ) {
				seatingPlan.push_back( girls.at(count) ) ;
				seatingPlan.push_back( boys.at(count) ) ;
				count++ ;
			}
			
			// add the hostess and the second half of the guests
			if ( count == ( attendees.size() / 4 ) ) { 
				seatingPlan.push_back("HOSTESS") ; 
			} else if ( count > (attendees.size() / 4 ) ) {
				// should never occur
				cout << "ERROR 0x2: Invalid number of guests" << endl ;
				seatingPlan.clear() ;
				return seatingPlan ;
			}
			while ( count < ( attendees.size() / 2 ) ) {
				seatingPlan.push_back( boys.at(count) ) ;
				seatingPlan.push_back( girls.at(count) ) ;
				count++ ;
			}

			// error check -- should never occur
			if ( count > ( attendees.size() / 2 ) ) {
				cout << "ERROR 0x3: Invalid number of guests" << endl ;
				seatingPlan.clear() ;
				return seatingPlan ;
			}

			return seatingPlan ;
		
		}
};