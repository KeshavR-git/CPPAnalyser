#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


class PartySeats
{
public:


	
	std::vector<string> seating(std::vector<string> & attendees) {


		int size = attendees.size(); 

		sort(attendees.begin(),attendees.end());

		std::vector<string> names;
		std::vector<string> gender;
		std::vector<string> boys;
		std::vector<string> girls;

		std::string x;
		std::string y;


		int boy;
		int girl;

		std::vector<string> list;


		for(int i=0; i < size; i++) {


			stringstream check(attendees[i]);

			check >> x >> y;

			names.push_back(x);
			gender.push_back(y);

			if(gender[i] == "boy") {

				boy++;

				boys.push_back(names[i]);


			} 

			if(gender[i] == "girl") { 

				girl++;
				
				girls.push_back(names[i]);
			}

			}


			if(boy != girl || boy < 2 || girl < 2) {

				return list;
			 
			}



			list.push_back("HOST");

			int boyConter = 0;
			int girlConter = 0;

		

			for(int i=1; i < (attendees.size()+2); i++) {


				if(i == (((size+2)/2))) {

					list.push_back("HOSTESS");
				}

				if ((i%2 == 0) && (i != (((size+2)/2)))) {

					list.push_back(boys[boyConter]);

					boyConter++;

				} 

				if(i%2 != 0 && i != (((size+2)/2)) ) {;

					list.push_back(girls[girlConter]); 

					girlConter++;
				}
			}

			return list;
	}

};
