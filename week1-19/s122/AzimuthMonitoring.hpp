#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		if (instructions.size()<1||instructions.size()>50){
			return -1;
		}
		int azimuth_deg = 360;
		for (int i=0; i<instructions.size(); i++){

			string direction = findDirection(instructions[i]);
			// Checking constraints:
			
			if (direction != "TURN" && direction != "RIGHT" && direction != "LEFT" && direction != "HALT"){
				return -1;
			}
			int val = -1;
			if (direction != "TURN" && instructions[i].length() > direction.length()){
				val = findDegree(instructions[i]);
				// Checking constraints:
				if (val<1 || val>179){
					return -1;
				}
			}
			// if the instruction has no value
			if (val == -1){
				if (direction == "RIGHT"){
					azimuth_deg += 90;
				}
				else if(direction == "LEFT"){
					azimuth_deg -= 90;
				}
				else if (direction == "TURN"){
					if (instructions[i] != "TURN AROUND"){
						return -1;
					}
					azimuth_deg -= 180;
				}
				else if (direction == "HALT"){
					if (azimuth_deg >= 360){
						azimuth_deg = azimuth_deg -360;
					}
					return azimuth_deg;
				}
			}
			else{
				if (direction == "RIGHT"){
					azimuth_deg += val;
				}
				else if(direction == "LEFT"){
					azimuth_deg -= val;
				}
			}
			//keeping the azimuth facing directions within bounds
			if (azimuth_deg>=720){
				azimuth_deg = azimuth_deg -360;
			}
			else if(azimuth_deg<=0){
				azimuth_deg = azimuth_deg + 360;
			}
		}
		if (azimuth_deg >= 360){
			azimuth_deg = azimuth_deg -360;
		}
		return azimuth_deg;
	}
	string findDirection(string str){
		// Returns the worded instruction e.g. RIGHT, LEFT, HALT, etc.
		bool space_found = false;
		string dir = "";
		int ind = 0;
		
		while (!space_found && ind<str.length()){
			if (isspace(str[ind]))
			{
				space_found = true;
			}
			if (!space_found){
				dir += str[ind];
			}
			ind++;
			
		}
		return dir;
	}
	int findDegree(string str){
		// Returns the degrees if it is inlcuded in the instructions, or -1 if not included
		bool space_found = false;
		string degree_str = "";
		int ind = 0;
		int degree = -1;
		while (ind < str.length()){
			if (isspace(str[ind])){
				space_found = true;
			}
			if (space_found){
				degree_str += str[ind];
			}
			ind++;
		}
		if (degree_str != ""){
			degree = stoi(degree_str);
		}
		return degree;
	}
};