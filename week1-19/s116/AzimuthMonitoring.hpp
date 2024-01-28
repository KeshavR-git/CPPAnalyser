#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class AzimuthMonitoring{
public:
	//defualt constructor
	AzimuthMonitoring(){}
	//method to return final azimuth position
	int getAzimuth(vector<string> instructions){
		//int to store position
		pos = 0;
		//temp strings
		string tempStr, numStr;

		//for loop to count through instructions
		for(int i = 0; i <= instructions.size()-1; i++){
			//int for storing string numbers
			temp = 0;

			//operations for HALT
			if(instructions[i] == "HALT"){
				return(pos);
			}

			if(instructions[i] == "LEFT"){
				pos = pos - 90;
				if(pos < 0){
					pos = 360 + pos;
				}

			//operations for RIGHT	
			}else if(instructions[i] == "RIGHT"){
				pos = pos + 90;
				if(pos >= 360){
					pos = 0 + (pos-360);
				}

				//operations for LEFT X
			}else if(instructions[i][0] == 'L'){
				//convert string to int
				string tempStr = instructions[i];
				string numStr = tempStr.substr(5, tempStr.length());
				int temp = stoi(numStr);

				pos = pos - temp;
				if(pos < 0){
					pos = 360 + pos;
				}

				//operations for RIGHT X
			}else if(instructions[i][0] == 'R'){
				//convert string to int
				string tempStr = instructions[i];
				string numStr = tempStr.substr(5, tempStr.length());
				int temp = stoi(numStr);

				pos = pos + temp;
				if(pos >= 360){
					pos = 0 + (pos-360);
				}

			//operations for TURN AROUND	
			}else if(instructions[i] == "TURN AROUND"){
				pos = pos + 180;
				if(pos >= 360){
					pos = 0 + (pos-360);
				}
			}
		}
	return(pos);
}

private:
	int pos;
	int temp;

};




