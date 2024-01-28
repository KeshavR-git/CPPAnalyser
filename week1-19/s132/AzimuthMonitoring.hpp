#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<vector>
using namespace std;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int tmp=0;int count=0;
		string r;int num;
		istringstream iss;
		for(int i=0;i<instructions.size();i++){
			iss.str(instructions[i]);
			for(int j=0;j<instructions[i].size();j++){
				if(isdigit(instructions[i][j])){
					count++;
				}
			}
			if(count>0){
				iss>>r;iss>>num;
			}
			else{
				iss>>r;num=90;
			}
			iss.str("");
			iss.clear();
			count=0;
			if(r=="RIGHT"){
				tmp+=num;
			}
			else if(r=="LEFT"){
				tmp-=num;
			}
			else if(r=="TURN"){
				tmp+=180;
			}
			else if(r=="HALT"){
				break;
			}
		}
		return (tmp+36000)%360;
	}
};