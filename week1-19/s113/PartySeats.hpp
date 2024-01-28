#include <vector>
#include <string>
#include <algorithm>
using namespace std;


class PartySeats {
	bool isBoy(string attendee){
		//A bit of a hack, yes.
		return(attendee[attendee.length()-1]=='y');
	}

	string nameOf(string attendee){
		//" boy" has 4 characters, whereas " girl" has 5
		if(isBoy(attendee)){
			return attendee.substr(0, attendee.length() - 4);
		} else {
			return attendee.substr(0, attendee.length() - 5);
		}
	}
public:
	vector<string> seating(vector<string> attendees){
		vector<string> seating;
		
		if(attendees.size() < 4)
			return seating;
		if(attendees.size() % 4 != 0)
			return seating;

		vector<string> boys;
		vector<string> girls;

		for(int i = 0; i < attendees.size(); i++){
			if(isBoy(attendees[i])){
				boys.push_back(attendees[i]);
			} else {
				girls.push_back(attendees[i]);
			}
		}

		if(boys.size()!=girls.size()){
			return seating;
		}

		//Sort the vectors now
		sort(boys.begin(), boys.end());
		sort(girls.begin(), girls.end());

		seating.push_back("HOST");
		for(int i = 0; i < boys.size()/2; i++){
			seating.push_back(nameOf(girls[i]));
			seating.push_back(nameOf(boys[i]));
		}
		seating.push_back("HOSTESS");
		for(int i = boys.size()/2; i < boys.size(); i++){
			seating.push_back(nameOf(boys[i]));
			seating.push_back(nameOf(girls[i]));
		}

		return seating;
	}
};