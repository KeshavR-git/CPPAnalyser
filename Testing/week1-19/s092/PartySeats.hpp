#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class PartySeats{
public:
	vector<string> seating(vector<string>& attendees){
		vector<string> seating;
		vector<string> boys;
		vector<string> girls;

		for (int i = 0; i < attendees.size()-1; i++)
		{
			for (int j = 0; j < attendees.size()-i-1; j++)
			{
				if(attendees[j]>attendees[j+1]){
					vector<string> temp;
					temp.push_back(attendees[j]);
					attendees[j]=attendees[j+1];
					attendees[j+1]=temp[0];
				}
			}
		}
		for (int i = 0; i < attendees.size(); i++)
		{
			if(find(attendees[i].begin(), attendees[i].end(),'b') != attendees[i].end()){
				boys.push_back(attendees[i]);
			}
		}

		for (int i = 0; i < attendees.size(); i++)
		{
			if(find(attendees[i].begin(), attendees[i].end(),'g') != attendees[i].end()){
				girls.push_back(attendees[i]);
			}
		}

		if(girls.size()!=boys.size()){
			attendees=seating;
			return seating;
		} else if(girls.size()%2!=0 || boys.size()%2!=0){
			attendees=seating;
			return seating;
		}

		for (int i = 0; i < attendees.size()/2; i++)
		{
			boys[i].erase(boys[i].end()-4,boys[i].end());
			girls[i].erase(girls[i].end()-5,girls[i].end());
		}

		seating.push_back("HOST");
		for (int i = 0; i < attendees.size()/4; i++)
		{
				seating.push_back(girls[i]);
				seating.push_back(boys[i]);
		}
		
		seating.push_back("HOSTESS");
		for (int i = attendees.size()/4; i < attendees.size()/2; i++)
		{
				seating.push_back(boys[i]);
				seating.push_back(girls[i]);
		}
			attendees= seating;
			return attendees;
	}
};