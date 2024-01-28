#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class PartySeats
{
public:
	string * seating (vector <string> attendees){
		// int peopleNum = 0;
		// while(attendees[peopleNum]!=""){
		// 	peopleNum++;
		// }
		// peopleNum = peopleNum -4;
		int peopleNum = attendees.size();
		string *orderarr;

		vector <string> boyNames;
		vector <string> girlNames;

		for (int i= 0; i< peopleNum; i++) {
			string aim = attendees[i];
			bool isname = true;
			string name = "";
			string gender = "";

			for (int j= 0; j< aim.length(); j++){
				if (aim[j] == ' '){
					isname = false;
				}
				if (isname == true) {
					name += aim[j];
				}
				else {
					gender +=aim[j];
				}
			}
			if (gender == " boy") {
				boyNames.push_back(name);
			}
			if (gender == " girl") {
				girlNames.push_back(name);
			}
		}
		
		sort(boyNames.begin(), boyNames.end());
		sort(girlNames.begin(), girlNames.end());
	

		if ( (peopleNum%2 != 0) || (boyNames.size() != girlNames.size()) || (peopleNum <= 3) ){
		 	return {};
		}

		//new array to order
		else{
			vector <string> preorder;
			orderarr = new string [peopleNum+2];
			preorder.push_back("HOST");
			for (int k = 0; k <boyNames.size(); k++){
				preorder.push_back(girlNames[k]);
				preorder.push_back(boyNames[k]);
			}
			//return preorder;
			for (int l = 0; l <boyNames.size()+1; l++){
				orderarr[l] = preorder[l];
			}
			orderarr[boyNames.size()+1] = "HOSTESS";
			for (int h = boyNames.size()+2; h <peopleNum+2; h++){
				orderarr[h] = preorder[h-1];
			}
			return orderarr;
		}

	}



	// int qq(string* attendees){
	// 	//int peopleNum1 =  sizeof(attendees)/sizeof(attendees[0]);
	// 	int peopleNum1 = 0;
	// 	while(attendees[peopleNum1]!=""){
	// 		peopleNum1++;
	// 	}
	// 	return peopleNum1;
	// }
};