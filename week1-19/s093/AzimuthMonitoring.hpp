#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
using namespace std;

class AzimuthMonitoring
{
public:
	int getAzimuth(std::vector<string> instructions){
		int count=0;
		for(int i=0;i<instructions.size();i++){
			if(instructions[i][0]=='H'){
				if(count==360){
					count=0;
				}
				return abs(count);
			}
			else if(instructions[i][0]=='T'){
				count=count-180;
				if(count<0){
					count=360+count;
				}
			}
			else if(instructions[i][0]=='L'){
				if(instructions[i].length()==4){
					count=count-90;
					if(count<0){
						count=360+count;
					}
				}
				else{
					int x=0;
					string substring=instructions[i].substr(5,instructions[i].length());
					stringstream iss(substring);
					iss>>x;
					count=count-x;
					if(count<0){
						count=360+count;
					}
				}
			}
			else if(instructions[i][0]=='R'){

				if(instructions[i].length()==5){
					count=count+90;
					if(count==360){
						count=0;
					}
					else if(count>360){
						count=count-360;
					}
				}
				else{
					int x=0;
					string substring=instructions[i].substr(6,instructions[i].length());
					stringstream iss(substring);
					iss>>x;
					count=count+x;
					if(count>360){
						count=count-360;
					}
				}
			}
		}
		if(count==360){
					count=0;
		}
		return abs(count);
	}
};