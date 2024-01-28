#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class PartySeats
{
	public:

		vector<string> seating(vector<string> attendees){

			vector<string> plan, girls, boys;

			//need 2 even lists, so total list must be divisible by 4
			if((attendees.size()%4)!= 0){
				return plan;
			}

			//sort list in alphabetical order
			sort(attendees.begin(),attendees.end());

			//split list into girls and boys array
			while(attendees.size()>0){
				if(attendees[0].back() == 'l'){

					//remove "girl" from end of string
					attendees[0] = attendees[0].substr(0,attendees[0].find(" "));
					girls.push_back(attendees[0]);
					attendees.erase(attendees.begin());
				} else {

					//remove "boy" from end of string
					attendees[0] = attendees[0].substr(0,attendees[0].find(" "));
					boys.push_back(attendees[0]);
					attendees.erase(attendees.begin());
				}
			}

			if(boys.size() != girls.size()){
				return plan;
			}

			//fill half plan array with HOST, then girl, boy, girl, boy...
			plan.push_back("HOST");		
			int size = boys.size();
			while(boys.size() > (size/2)){

				plan.push_back(girls[0]);
				girls.erase(girls.begin());
				plan.push_back(boys[0]);
				boys.erase(boys.begin());

			}

			//fill second half of plan array with HOSTESS, then boy, girl, boy, girl...
			plan.push_back("HOSTESS");
			while(girls.size()>0){
				plan.push_back(boys[0]);
				boys.erase(boys.begin());
				plan.push_back(girls[0]);
				girls.erase(girls.begin());
			}

			return plan;

		}
};