#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class AzimuthMonitoring{
	public:
		int getAzimuth(vector<string> instructions){
			int angle=0;
			for(int i=0; i<instructions.size();i++){
				if (instructions[i]== "LEFT"){
					angle=angle-90;
					if(angle<0){//avoid nagtive num
						angle=360+angle;
					}
				}else if(instructions[i]=="RIGHT"){
					angle=angle+90;
					if(angle>=360){//avoid angle larger than 360
						angle=angle-360;
					}
				}else if(instructions[i]=="TURN AROUND"){
					angle=angle+180;
					if(angle>=360){
						angle=angle-360;
					}
				}else if(instructions[i]=="HALT"){
					break;
				}else if(instructions[i][0]=='R'&&instructions[i][1]=='I' && instructions[i][2]=='G' && instructions[i][3]== 'H' && instructions[i][4]=='T'
					&& instructions[i][5]==' ' && instructions[i][6]>'0' && instructions[i][6]<='9'){
					int rightangle;
					string nr;
					for(int j=6;instructions[i][j]!='\0';j++){
						nr=nr+instructions[i][j];
						
						rightangle=stoi(nr);
					}
					angle=angle+rightangle;
					if(angle>=360){//avoid angle larger than 360
						angle=angle-360;
					}

				}else if(instructions[i][0]=='L'&&instructions[i][1]=='E' && instructions[i][2]=='F' && instructions[i][3]== 'T' && instructions[i][4]==' '
					 && instructions[i][5]>'0' && instructions[i][5]<='9'){
					int leftangle;
					string nl;
					for(int j=5;instructions[i][j]!='\0';j++){
						nl=nl+instructions[i][j];
						
						leftangle=stoi(nl);
					}
					angle=angle-leftangle;
					if(angle<0){//avoid nagtive num
						angle=360+angle;
					}
				}

			}
	
			return angle;
		};
};