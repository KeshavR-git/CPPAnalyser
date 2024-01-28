#include <iostream>
#include <string>
#include <vector>
using namespace std;
class AzimuthMonitoring{
public:
	int getAzimuth(std::vector<string> instructions){
		int degree=0;
		for(int i=0;i<instructions.size();i++){
			if(degree<0){
				degree=360+degree;
			}
			if(degree>=360){
				degree=degree-360;
			}
			if(instructions[i]=="LEFT"){
				degree=degree-90;
			}
			else if(instructions[i][0]=='L'&&instructions[i].size()>4){
				degree=degree-stoi(instructions[i].substr(instructions[i].find(" ")));
			}
			else if(instructions[i]=="RIGHT"){
				degree=degree+90;
			}
			else if(instructions[i][0]=='R'&&instructions[i].size()>5){
				degree=degree+stoi(instructions[i].substr(instructions[i].find(" ")));
			}
			else if(instructions[i]=="TURN AROUND"){
				degree=degree-180;
			}
			else if(instructions[i]=="HALT"){
				break;
			}
		}
		if(degree<0){
			degree=360+degree;
		}
		if(degree>=360){
			degree=degree-360;
		}
		return degree;
	}
};
