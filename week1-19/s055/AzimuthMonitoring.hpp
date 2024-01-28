#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int degree=0;
		int operations=instructions.size();
		for (int i = 0; i < operations; ++i)
		{
			if(instructions[i][0]=='L'&&instructions[i].size()==4){
				degree-=90;
			}else if(instructions[i][0]=='R'&&instructions[i].size()==5){
				degree+=90;
			}else if(instructions[i][0]=='L'&&instructions[i].size()>4){
				string temp=instructions[i].substr(instructions[i].find(" "));
				degree-=stoi(temp);
			}else if(instructions[i][0]=='R'&&instructions[i].size()>5){
				string temp=instructions[i].substr(instructions[i].find(" "));
				degree+=stoi(temp);
			}else if(instructions[i][0]=='T'){
				degree-=180;
			}else if(instructions[i][0]=='H'){
				break;
			}
			
		}
		if(degree<0){
			degree=degree%360+360;
		}
		if(degree>0){
			degree=degree%360;
		}
	return degree;
}
};
