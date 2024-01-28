#include <string>
#include <vector>
using namespace std;

class PartySeats {
public:
	/*	string* seating(string* attendees) {
		cout<<"yes";
 		int size=attendees->size();
		string * toReturn=new string[100];
		string isBoy="boy";
		string isgirl="girl";
		vector<string> boylist;
		vector<string> girllist;
		int index;

		for(int i=0;i<size-1;i++) {
			if (attendees[i].find(isBoy)) {
				boylist.push_back(attendees[i]);
			} else if (attendees[i].find(isgirl)) {
				girllist.push_back(attendees[i]);
			} else {
				return NULL;
			}
			cout<<"yes";
		}
		if (boylist.size()!=girllist.size()) {
			return NULL;
		}
		if (boylist.size()%2!=0  || girllist.size()%2!=0) {
			return NULL;
		}
		for(int i=0;i<boylist.size()-1;i++) {
			if (i==0) {
				toReturn[index]="HOST";
				index++;

			}
			if (i==boylist.size()/2) {
				toReturn[index]="HOSTESS";
				index++;
			}
			while(i<boylist.size()/2) {
				toReturn[index]=girllist.at(i);
				index++;
				toReturn[index]=boylist.at(i);
				index++;
			}
			while(i>boylist.size()/2) {
				toReturn[index]=boylist.at(i);
				index++;
				toReturn[index]=girllist.at(i);
				index++;
			}
			
		}
		return	toReturn;
	}
*/

};