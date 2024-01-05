#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

class PartySeats
{
public:

	vector<string> seating(vector<string> attendees) {

		int size = attendees.size();
		int halfTable = (size + 2)/2;
		int b = 0;
		int g = 0;
		vector<string> table, girls, boys;
		bool toggle;

		for (int i = 0; i < size; i++) {

		    int boyPos = attendees[i].find("boy");
		    int girlPos = attendees[i].find("girl");

		    if (boyPos != string::npos) { 
		    	attendees[i].erase(boyPos - 1, attendees[i].size());
		    	boys.push_back(attendees[i]);
		    } else if (girlPos != string::npos) {
		    	attendees[i].erase(girlPos - 1, attendees[i].size());
				girls.push_back(attendees[i]);
		    }
		}

		sort(girls.begin(), girls.end());
		sort(boys.begin(), boys.end());

		if (boys.size() != girls.size() || girls.size() < 2 || boys.size() < 2 || boys.size()%2 == 1) {
			return table;
		}
		
		for (int i = 0; i < size + 2; i++) {

			if (i == 0) {
				table.push_back("HOST");
				toggle = 0;
			} else if (i == halfTable) {
				table.push_back("HOSTESS");
				toggle = 1;
			} else if (toggle == 1) {
 				table.push_back(boys[b]);
 				b++;
 				toggle = 0;
			} else if (toggle == 0) { 
				table.push_back(girls[g]);
				g++;
				toggle = 1;
			}
		}
		return table;
	}
};