#include <bits/stdc++.h>
#include "string.h"
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring
{
public:

	int getAzimuth(vector <string> instructions)
	{
		int angle = 0;
		string temp = "";
		int length=0;
		int j=0;

		for(int i = 0;i<instructions.size();i++) {

				if(instructions[i][0] == 'R' && instructions[i][5] == '\0') {
					//cout << "Jumps into R: " << angle << endl;
				angle +=90;
			}
			else if(instructions[i][0]=='R' && instructions[i][5] == ' ') {

				j =5;
				length = instructions[i].length();

				while(j<length) {
					temp = temp + instructions[i][j];
					j++;
				}
				angle+=stoi(temp);
				temp = "";
			}
			else if(instructions[i][0] == 'L' && instructions[i][4] == ' ') {
				//cout << "jumps into here L number: " << angle << endl;
				j =5;
				length = instructions[i].length();

				while(j<length) {
					temp += instructions[i][j];
					j++;
				}
				angle-=stoi(temp);
				temp = "";
			}

			else if(instructions[i][0] == 'L' && instructions[i][4] == '\0') {
				angle-=90;
			}
			else if(instructions[i][0] == 'T') {
				//cout << "jumps into here TURN AROUND: " << angle << endl;
				angle +=180;
			}

			else if(instructions[i][0]=='H') {
			break;
			}
			}

			while(angle >359)
			{
				
				angle = angle - 360;
				//cout << "angle in while minus: " << angle << endl;
			}
			while(angle<0)
			{
				
				angle = angle + 360;
				//cout << "angle in while plus: " << angle << endl;
			}

		return angle;
	}
	
};