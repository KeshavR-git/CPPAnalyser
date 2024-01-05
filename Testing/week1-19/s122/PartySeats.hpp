#include <string>
#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


// split into two list of genders, alphabetically ordered
// if number of genders not same, return empty list
// if number of genders same, put HOST first then once we reached half of the list, we put HOSTEST
class PartySeats{
public:
	vector<string> seating(vector<string> attendees){
		vector<string> res;
		if(attendees.size()<4||attendees.size()>50){
			return res;
		}
		if(attendees.size()%2 != 0){
			return res;
		}
		vector<string> boys = splitboy(attendees);
		vector<string> girls = splitgirl(attendees);
		// for (int i = 0; i<boys.size(); i++){
		// 	cout << "boy " << boys[i] << endl;
		// }
		// cout << "girls list size " << girls.size() << endl;
		// for (int i = 0; i<girls.size(); i++){
		// 	cout << "girl " << girls[i] << endl;
		// }
		if(boys.size() != girls.size()){
			return res;
		}
		int max_size = attendees.size() + 2;
		int index = 1;
		res.push_back("HOST");
		while (index< max_size){
			string name = "";
			if (index == max_size/2){
				name = "HOSTEST";
			}
			else if (index%2 == 0){
				name = boys.back();
				boys.pop_back();
				
			}
			else if (index%2 != 0){
				name = girls.back();
				girls.pop_back();
				//cout << "iran" << endl;
				
			}
			// cout << index%2 << endl;
			// cout << "index " << index << endl;
			// cout << "boys rem " << boys.size() << endl;
			// cout << "girls rem " << girls.size() << endl;
			// cout << "name " << name<< endl;
			res.push_back(name);
			index++;
		}
		return res;
	};

	vector<string> splitboy(vector<string> attendees){
		vector<string> boys;
		for(int i =0 ; i<attendees.size(); i++){
			bool space = false;
			string name = "";
			string gender = "";
			for (int j = 0; j<attendees[i].length(); j++){
				if(isspace(attendees[i][j])){
					space = true;
				}
				else if(space){
					gender += attendees[i][j];
				}
				else if(!space){
					name += attendees[i][j];
				}
			}
			if(gender == "boy"){
				boys.push_back(name);
			}
		}
		boys = bubblesort(boys);
		return boys;
	}
	vector<string> splitgirl(vector<string> attendees){
		vector<string> girls;
		for(int i =0 ; i<attendees.size(); i++){
			bool space = false;
			string name = "";
			string gender = "";
			for (int j = 0; j<attendees[i].length(); j++){
				if(isspace(attendees[i][j])){
					space = true;
				}
				else if(space){
					gender += attendees[i][j];
				}
				else if(!space){
					name += attendees[i][j];
				}
			}
			if(gender == "girl"){
				girls.push_back(name);
			}
		}
		girls = bubblesort(girls);
		return girls;
	}
	vector<string> bubblesort(vector<string> namelist){
		
		for (int i=0; i<namelist.size()-1; i++){
			for (int j=0; j<namelist.size()-1; j++){
				if(namelist[j]<namelist[j+1]){
					string temp = namelist[j];
					namelist[j] = namelist[j+1];
					namelist[j+1] = temp;
				}
			}
		}
		return namelist;
	}
};