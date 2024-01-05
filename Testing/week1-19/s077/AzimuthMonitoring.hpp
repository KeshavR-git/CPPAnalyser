#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int numInstructions=instructions.size();
		int azimuth=0;
		int n=0;
		string dirVal[]={"0","0"};

		for(int i=0;i<numInstructions;i++){

			//simple instructions
			if(instructions[i]=="HALT"){
				break;
			} else if(instructions[i]=="LEFT"){
				azimuth=azimuth-90;
			} else if(instructions[i]=="RIGHT"){
				azimuth=azimuth+90;
			} else if(instructions[i]=="TURN AROUND"){
				azimuth=azimuth+180;
			} else {
				//split string into 2 elements
				//convert 2nd element to int using stoi
				//ie n=stoi(element)
				//add or subtract n based on whether first element is left or right
				istringstream is(instructions[i]);
				for(int j=0;j<2;j++){
					is >> dirVal[j];
					//cout << dirVal[j] << endl;
				}
				if(dirVal[0]=="LEFT"){
					azimuth=azimuth-stoi(dirVal[1]);
				} else if(dirVal[0]=="RIGHT"){
					azimuth=azimuth+stoi(dirVal[1]);
				}
			}

			//reset if out of bounds
			if(azimuth>359){
				azimuth=azimuth-360;
			} else if(azimuth<0){
				azimuth=azimuth+360;
			}
		}
	

		return azimuth;
	}
	
};