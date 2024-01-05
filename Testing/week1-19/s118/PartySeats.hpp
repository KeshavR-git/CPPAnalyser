#include <iostream>
#include <vector>
//#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

class PartySeats{
public:
	vector<string> seating(vector<string> attendees){
		int size = attendees.size();
		string boysNames[size];
		string girlsNames[size];
		string name;
		string gender;
		int girlCounter = 0;
		int boyCounter = 0;
		vector<string> result;

		for (int i = 0; i < size; i++){
			istringstream iss(attendees[i]); 

			iss >> name >> gender;
			if (gender == "girl"){
				girlsNames[girlCounter] = name;
				girlCounter++;
			}
			else if (gender == "boy"){
				boysNames[boyCounter] = name;
				boyCounter++;
			}
		}

		int i;
		if ((girlCounter == boyCounter) && (!(girlCounter == 1)) && (!(girlCounter == 3))){
			//cout << "here" << endl;
			//result[0] = "HOST";
			result.push_back("HOST");
			//cout << "HERE" << endl;
			sort(boysNames,boysNames + boyCounter);
			sort(girlsNames,girlsNames + girlCounter);
			//cout << boysNames[0] << endl;
			//cout << boysNames[1] << endl;

			for (i = 0; i < boyCounter; i++){
				if (i%2 == 0){
					//cout << "girl: " << girlsNames[i] << endl;
					//result[i+1] = girlsNames[i/2];
					result.push_back(girlsNames[i/2]);
				}
				else{
					//cout << i/2 << "boy: " << boysNames[i/2] << endl;
					//result[i+1] = boysNames[i/2];
					result.push_back(boysNames[i/2]);
				}
			}
			
			i++;
			result.push_back("HOSTESS");
			for (i; i < boyCounter*2 + 1; i++){
				if (i%2 == 0){
					//cout << "girl: " << girlsNames[(i-1)/2] << endl;
					//result[i+1] = girlsNames[(i-1)/2];
					result.push_back(girlsNames[(i-1)/2]);
				}
				else{
					//cout << "boy: " << boysNames[i/2] << endl;
					//result[i+1] = boysNames[i/2];
					result.push_back(boysNames[i/2]);
				}
			}
		}

		return result;
	}
};