#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <bits/stdc++.h> 
using namespace std;


bool isBoy(string s){
	int i=0;
	while (s[i] != ' ')
		i++;
	if (s[i+1] == 'b')
		return true;
	else return false;
}
string name(string s){
	int i=0;
	while (s[i] != ' ')
		i++;
	return s.substr(0, i);
}


class PartySeats
{
	public:
	vector<string> seating(vector<string> attendees)
	{
		vector<string> output = {};
		int boys = 0;
		int girls = 0;
		vector<string> boynames = {};
		vector<string> girlnames = {};
		for (int i=0; i<attendees.size(); i++){
			if (isBoy(attendees[i])){
				boynames.push_back(name(attendees[i]));
				boys++;
			}
			else{	
				girlnames.push_back(name(attendees[i]));
				girls++;
			}
		}
		if ( boys%2!=0 || girls%2 !=0 || girls != boys)
			return output; // empty output
		else { // sort alphabetically and generate output
			sort(boynames.begin(), boynames.end());
			sort(girlnames.begin(), girlnames.end());
			output.push_back("HOST");
			for (int i=0; i<boys/2; i++){
				output.push_back(girlnames[i]);
				output.push_back(boynames[i]);
			}
			output.push_back("HOSTESS");

			for (int i=boys/2; i<boys; i++){
				output.push_back(boynames[i]);
				output.push_back(girlnames[i]);
			}
			
		}
		return output;
	}
};

