#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
 
class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string>instructions){
	int direction = 0;
	// int num = sizeof(instructions)/sizeof(instructions[0]);
	for(int i=0; i<instructions.size(); i++){
				if(instructions[i].find("LEFT") != string::npos  && instructions[i] != "LEFT"){
					direction -= Integer(instructions[i]); 
				}
				if(instructions[i].find("RIGHT") != string::npos  && instructions[i] != "RIGHT"){
					direction += Integer(instructions[i]); 
				}
				if(instructions[i] == "TURN AROUND"){
					direction += 180; 
				}
				if(instructions[i] == "LEFT"){
					direction -= 90; 
				}
				if(instructions[i] == "RIGHT"){
					direction += 90; 
				}
				if(instructions[i] == "HALT"){
					return direction;
				}
				if(direction >= 360){
					direction = direction % 360;
				}
				if(direction < 0){
					direction = direction % 360 + 360;
				}	
		}
		return direction;
	}
	int Integer(string str){ 
    	stringstream words;     
    	words << str; 
    	string temp; 
    	int value; 
    	while (!words.eof()) { 
        	words >> temp; 
        	if (stringstream(temp) >> value) 
        		temp = ""; 
    	}
    	return value; 
	}
};




