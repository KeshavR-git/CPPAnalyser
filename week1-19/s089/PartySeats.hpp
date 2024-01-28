#include <iostream>
#include "math.h"
#include <string>
#include <vector>
#include <algorithm>

class PartySeats
{
public:
	std::vector<std::string> seating(std::vector<std::string> attendees)
	{
		//	Must be at least 4 participants so that host and hostess are directly
		//	Apart and there are alternating participants
		std::vector<std::string> the_seats;

		int length = attendees.size();
		if( (length % 2 != 0) || ((length/2) % 2 != 0) )
			return the_seats;

		//	Split into boys and girls
		std::vector<std::string> boys;
		std::vector<std::string> girls;

		for(int i=0; i<(attendees.size()); i++)
		{
			std::string gender = attendees[i].substr(attendees[i].find(" ") + 1);
			std::string name = attendees[i].substr(0,attendees[i].find(" "));

			if(gender.compare("boy")==0)
				boys.push_back(name);
			else if(gender.compare("girl")==0)
				girls.push_back(name);
		}

		//	If not an equal number of boys and girls, alternation isnt possible
		if(boys.size() != girls.size())
			return the_seats;
		
		//	Sort the boys and girls array
		sort(boys.begin(), boys.end());
		sort(girls.begin(), girls.end());

		//	Define seating arrangements:
		the_seats.push_back("HOST");
		for(int i=0;i<ceil(boys.size()/2);i++)
		{
			the_seats.push_back(girls[i]);
			the_seats.push_back(boys[i]);
		}
		the_seats.push_back("HOSTESS");
		for(int i=ceil(boys.size()/2);i<boys.size();i++)
		{
			the_seats.push_back(boys[i]);
			the_seats.push_back(girls[i]);
		}

		return the_seats;
	}
};