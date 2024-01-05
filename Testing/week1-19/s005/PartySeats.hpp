#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;
//NOTE: look at sublime shortcuts

void debug(vector<string> vect){
	for(int i=0;i<vect.size();i++){
		cout<<vect[i]<<" ";
	}
	cout<<endl;
}

class PartySeats{

	public:
	vector<string> seating(vector<string> attendees){

		vector<string> sorted;				
		vector<string> boys;
		vector<string> girls;

		string name;
		for(int i=0;i<attendees.size();i++){
			int delimiter_pos = attendees[i].find_first_of(" ");
			string gender=attendees[i].substr(delimiter_pos+1,string::npos);

			//test if you can make an assignment in if-statement
			if(gender=="boy"){
				name=attendees[i].substr(0,delimiter_pos);
				boys.push_back(name);
			}
			else if(gender=="girl"){
				name=attendees[i].substr(0,delimiter_pos);
				girls.push_back(name);
			}
		}

		sort(girls.begin(),girls.begin()+girls.size());
		sort(boys.begin(),boys.begin()+boys.size());

		debug(girls);
		debug(boys);

		// check if vectors are valid to return a non-empty vector
		int counter = 0;
		if(boys.size()==girls.size()&&boys.size()>1&&boys.size()%2==0){
			sorted.push_back("HOST");
			for(int i=0;i<boys.size()/2;i++){
				sorted.push_back(girls[i]);
				sorted.push_back(boys[i]);
				counter++;
			}
			sorted.push_back("HOSTESS");
			for(int i=counter;i<boys.size();i++){
				sorted.push_back(boys[i]);
				sorted.push_back(girls[i]);
				counter++;
			}

		}

		return sorted;
		
	}
};	