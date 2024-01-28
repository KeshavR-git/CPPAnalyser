#include <iostream>
#include <stdlib.h> 
#include <string>
#include <sstream>
#include <vector>
using namespace std;
#ifndef AZIMUTHMONITORING_HPP
#define AZIMUTHMONITORING_HPP

class AzimuthMonitoring {
public:
	int getAzimuth(vector<string> instructions){
		int result=0;
		for(vector<string>::iterator i = instructions.begin();i != instructions.end(); i++){
			if (*i == "LEFT"){
				result = result - 90;
			}
			if (*i == "RIGHT"){
				result = result + 90;
			}
			if (*i == "TURN AROUND"){
				result = result + 180;
			}
			if (*i == "HALT"){
				if(result<0){
					result=result * (-1);
					result=result%360;
					result=360-result;
				}
				if (result==360){
					result=0;
				}
				if (result>360){
					result=result%360;
				};
				return result;
			}
			else
			{
				stringstream shifter(*i);
				string direction;
				int magnitude = 0;
				shifter >> direction>>magnitude;
				if(direction=="LEFT"){
					result=result-magnitude;
				}
				if(direction=="RIGHT"){
					result=result+magnitude;
				}
			};
		};
			if(result<0){
					result=result * (-1);
					result=result%360;
					result=360-result;
				}
				if (result==360){
					result=0;
				}
				if (result>360){
					result=result%360;
				};	
				return result;
	}
};
#endif