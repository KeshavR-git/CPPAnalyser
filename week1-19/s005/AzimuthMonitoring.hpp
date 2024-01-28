#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AzimuthMonitoring{

	public:
	int getAzimuth(vector<string> instructions){

		int counter = 0;
		for(int i=0;i<instructions.size();i++){
			if(instructions[i]=="LEFT"){
				counter-=90;
			}
			else if(instructions[i]=="RIGHT"){
				counter+=90;
			}
			else if(instructions[i]=="TURN AROUND"){
				counter+=180;
			}
			else if(instructions[i]=="HALT"){
				break;
			}
			else{

				// split into tokens to get orientation of instruction (i.e. left or right)
				int delimiter_pos = instructions[i].find_first_of(" ");
				string direction = instructions[i].substr(0,delimiter_pos);				

				// note: here, check if first token valid first before proceeding
				if(direction=="LEFT"||direction=="RIGHT"){
					int rotation = stoi(instructions[i].substr(delimiter_pos+1, string::npos));
					if(direction=="LEFT"){counter-=rotation;} // go left if given "LEFT"
					else{counter+=rotation;} // only other case is if "RIGHT" (fromthe outer if-statement)
				}
				else{ // if token invalid, give error message and do nothing
					cout<<"this is nonsense, I'm doing nothing"<<endl;
				}
			}
		}
		if(counter<0||counter>359){
			int turn = 360; // want to keep angle between 0 and 360
			if(counter<0){
				while(turn<(counter*-1)){
					turn+=360;
				}
				counter+=turn;
			}
			else if(counter>359){
				while(turn+360<=counter){
					turn+=360;
				}
				counter-=turn;
			}
		}

		return counter;

	}

};