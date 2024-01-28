#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PartySeats{
private:
	vector<string> boys;
	vector<string> girls;
	vector<string> res;
public:
	vector<string> seating(vector<string> attendees){
		//create one variable to store the length of array
		res.clear();
		boys.clear();
		girls.clear();
		int length = attendees.size();
		vector<string> empty;
		//that is rule for that totally can't finish seating
		if(length % 2 != 0){
			return empty;
		} else {
			int check = length/2;
			if(check%2 != 0){
				return empty;
			}
		}
		int boy = 0;
		int girl = 0;
		int subcheck = 0;
		for(int i = 0; i<length; i++){
			while(subcheck < 26){
				if(attendees[i][subcheck] == 'b'){
					int name = 0;
					while (attendees[i][name] != ' '){
						name++;
					}
					char putinname[name+1];
					for(int k = 0; k<name; k++){
						putinname[k] = attendees[i][k];
					}
					putinname[name] = '\0';
					string sa = putinname;
					boys.push_back(sa);
					boy++;
					subcheck = 0;
					break;
				} else if(attendees[i][subcheck] == 'g'){
					int name = 0;
					while (attendees[i][name] != ' '){
						name++;
					}
					char putinname[name+1];
					for(int k = 0; k<name; k++){
						putinname[k] = attendees[i][k];
					}
					putinname[name] = '\0';
					string sa = putinname;
					girls.push_back(sa);
					girl++;
					subcheck = 0;
					break;
				}
				subcheck++;
			}
		}
		if (boy != girl){
			return empty;
		}
		//this part is about the sorting
		string temp1;
		string temp2;
		int sublen = length/2;
		bool swi = true;
		for (int i = 1; i <= sublen-1; i++){
			for(int j = 1; j <= sublen-1; j++){
				if (boys[j-1][0] > boys[j][0]){
					temp1 = boys[j-1];
					boys[j-1] = boys[j];
					boys[j] = temp1;
				} else if (boys[j-1][0] == boys[j][0]){
					int subsub = 0;
					int alen = boys[j-1].length();
					int blen = boys[j].length();
					if(alen>blen){
						temp1 = boys[j-1];
						boys[j-1] = boys[j];
						boys[j] = temp1;
					}
					while (boys[j-1][subsub] <= boys[j][subsub]){
						subsub++;
						if(subsub>boys[j-1].length()){
							break;
						}
						if(boys[j-1][subsub] > boys[j][subsub]){
							temp1 = boys[j-1];
							boys[j-1] = boys[j];
							boys[j] = temp1;
							break;
						}
					}
				}
				if (girls[j-1][0] > girls[j][0]){
					temp2 = girls[j-1];
					girls[j-1] = girls[j];
					girls[j] = temp2;
				} else if (girls[j-1][0] == girls[j][0]){
					int subsub = 0;
					int alen = girls[j-1].length();
					int blen = girls[j].length();
					if(alen>blen){
						temp2 = girls[j-1];
						girls[j-1] = girls[j];
						girls[j] = temp2;
					}
					while (girls[j-1][subsub] <= girls[j][subsub]){
						subsub++;
						if(subsub>girls[j-1].length()){
							break;
						}
						if(girls[j-1][subsub] > girls[j][subsub]){
							temp2 = girls[j-1];
							girls[j-1] = girls[j];
							girls[j] = temp2;
							break;
						}
					}
				}
			}
		}
		//this part is check there are same number of boys and girl to prove seating completely
		
		//set each person in the seating include host and hostess
		int boyan = 0;
		int girlan = 0;
		for(int i = 0; i<length+2; i++){
			if(i == 0){
				res.push_back("HOST");
			} else if (i == (length+2)/2){
				res.push_back("HOSTESS");
			} else if (i%2 == 0){
				res.push_back(boys[boyan]);
				boyan++;
			} else {
				res.push_back(girls[girlan]);
				girlan++;
			}
		}

		return res;
	}
};