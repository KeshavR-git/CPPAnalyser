#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int res = 0;
		int length = instructions.size();
		for(int i=0; i<length; i++){
			if(instructions[i] == "RIGHT"){
				res+=90;
			}
			else if(instructions[i] == "LEFT"){
				res-=90;
			}
			else if(instructions[i] == "TURN AROUND"){
				res+=180;
			}
			else if(instructions[i].at(0) == 'L'){
				int a = stoi(instructions[i].substr(5));
				res-=a;
			}
			else if(instructions[i].at(0) == 'R'){
				int b = stoi(instructions[i].substr(6));
				res+=b;
			}	 				
			else if(instructions[i] == "HALT"){
				res=res%360;
				if(res>=0){
					return res;
				}
				else{
					return res+360;
				}
				break;
			}	
		}		

		res=res%360;
		if(res>=0){
			return res;
		}
		else{
			return res+360;
		}
	}
  	
};