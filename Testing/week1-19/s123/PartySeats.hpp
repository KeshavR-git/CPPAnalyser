#include <string> 
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

class PartySeats
{
public:
	vector<string> seating(vector<string> attendees) 
	{

		vector<string> table;
		//vector<string> attendees = attendeesOriginal;
		if (attendees.size() % 4 != 0 || attendees.size() <= 0) {			//if the number of attendees is not divisible by 4 then it's there is no possible solution (draw it on paper)
			return table;			//return immediately if odd length 
		}

		sort(attendees.begin(), attendees.end());		//sort by name

		int hotessIndex = (attendees.size() + 2)/2;		//once the loop got to this iteration, it'll insert the hotess in
		int male = 1;


		vector<string> boys, girls;			//vector of names
		for (int i=0; i<attendees.size(); i++) {
			if (attendees[i][attendees[i].size() - 1] == 'y') {
				boys.push_back(attendees[i]);
			} else if (attendees[i][attendees[i].size() - 1] == 'l') {
				girls.push_back(attendees[i]);
			}
		}
		if (boys.size() != girls.size()) {		//if they got uneven size
			return table;
		}

		table.push_back("HOST");		//add host to the begin of the array
		for (int i=0; i<attendees.size(); i++) {		//+1 since you have 2 extra people. loop from 1 since host has already been added. this loop through the table
			if (i != hotessIndex - 1) {
				male = male * (-1);			//swap the gender if it's not the host. not swap at hotess
			}
			if (male == 1) {		
				table.push_back(boys[0]);			//add the first boy in and erase the first element 
				boys.erase(boys.begin());
			} else if (male == -1) {
				table.push_back(girls[0]);
				girls.erase(girls.begin());
			}
		}


		table.insert(table.begin() + hotessIndex, "HOSTESS");		//add the hotest into the right place


		for (int i=1; i<table.size(); i++) {			//remove the 'boy' and 'girl' thing -> remove everything behind the last capslock character
			for (int m=0; m<table[i].size(); m++) {
				if (isupper(table[i][m]) == false) {
					table[i].erase(m);
				}
			}
		}
	 
		return table;

	};

};