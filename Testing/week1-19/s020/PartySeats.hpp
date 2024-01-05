#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int XX_MARKER_XX;

class PartySeats {
	
	private:
		int i, boys, girls, j;
		string temp;
		std::vector<std::string> peet;
		std::vector<std::string> veet;

	public:
		std::vector<std::string> seating(std::vector<std::string> attendees){
			girls = 0;
			boys = 0;
			if (attendees.size() < 4 || attendees.size() %2 != 0){

				attendees.clear();

				return(attendees);
			}

			 for(i=0; i < attendees.size(); i++ ){
				temp = attendees[i];
				if (temp.find("girl") != string::npos){
					temp.erase(temp.end()-5,temp.end());
					veet.push_back(temp);
					girls++;
				} else {
					temp.erase(temp.end()-4,temp.end());
					peet.push_back(temp);
					boys++;
				}
			}
			if (girls != boys){

				attendees.clear();

				return(attendees);
			}
			//sorting in alphabetical order
			sort(peet.begin(),peet.end());
			sort(veet.begin(),veet.end());

			//clearing an existing vector to be used as the return vector
			attendees.clear();
			attendees.push_back("HOST");

			//alternates between girls and boys 
			for (i=0; i <= (peet.size() + veet.size() ); i++){
				if ( i == floor(peet.size()+veet.size() )/2 ){
					attendees.push_back("HOSTESS");
				}
				else if(i % 2 == 0){
					attendees.push_back(veet[0]);
					veet[0].erase();
					for (j=0; j < veet.size() -1; j++){
						veet[j] = veet[j+1];
					}
				}
				else{
					attendees.push_back(peet[0]);
					peet[0].erase();
					for (j=0; j < peet.size() -1; j++){
						peet[j] = peet[j+1];
					}
				}
			}
			return(attendees);

		
		}

};