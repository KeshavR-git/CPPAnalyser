#include<iostream>
#include<string>
#include <sstream>
#include <vector>
using namespace std;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int degree=0;
		string command="";
		

		for(int i=0;i<instructions.size();i++){
			command=instructions[i];
			if(command=="LEFT"){
				degree-=90;
			}
			if(command=="RIGHT"){
				degree+=90;
			}
			if(command=="TURN AROUND"){
				degree+=180;
			}
			int command_length=command.length();
			if(command_length>4 && command[0]=='L'){
				string target="LEFT ";
				int pos=command.find(target);
				command=command.erase(pos,5);

				stringstream ss;
				ss<<command;
				int i_left_x=0;
				ss>>i_left_x;
				degree-=i_left_x;

			}
			if(command_length>5 && command[0]=='R'){
				string target="RIGHT ";
				int pos=command.find(target);
				command=command.erase(pos,6);

				stringstream ss;
				ss<<command;
				int i_right_x=0;
				ss>>i_right_x;
				degree+=i_right_x;
			}
			if(command=="HALT"){
				break;
			}

		}
		degree %=360;
		if(degree<0){
			degree+=360;
		}
		return degree;
	}
};