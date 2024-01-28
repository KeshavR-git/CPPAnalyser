#include <iostream>
#include <string>
#include <vector>
using namespace std;


class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions){
		int azimuth = 0;
		int size = instructions.size();
		for(int i=0; i<size; i++){
			if(instructions[i] == "HALT"){
				azimuth=azimuth%360;
				if(azimuth>=0){
					return azimuth;
				}else{
					return 360+azimuth;
				}
				break;
			}else if(instructions[i] == "LEFT"){
				azimuth-=90;
			}else if(instructions[i] == "RIGHT"){
				azimuth+=90;
			}else if(instructions[i].at(0) == 'L'){
				int left = stoi(instructions[i].substr(5));
				azimuth-=left;
			}else if(instructions[i].at(0) == 'R'){
				int right = stoi(instructions[i].substr(6));
				 azimuth+=right;
			}else if(instructions[i] == "TURN AROUND"){
				azimuth+=180;
			}
		}
		azimuth=azimuth%360;
		if(azimuth>=0){
			return azimuth;
		}else{
			return 360+azimuth;
		}
	}
};