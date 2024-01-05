#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring {
public:

	int getAzimuth(vector<string> instructions){
			int res = 0;
		for (int i = 0 ; i < instructions.size();i++){
			if (instructions[i] == "LEFT"){
				res-=90;
			} else if (instructions[i] == "RIGHT"){
				res+=90;
			} else if (instructions[i] == "TURN AROUND"){
				res+=180;
			} else if (instructions[i] == "HALT"){
				break;
			} else {
				string h[2];
                instructions[i]+= " ";
                int found,j = 0;
                while (instructions[i] != "\0"){
     	           found = instructions[i].find(" ");
     	           for (int f = 0; f < found ; f++){
                   h[j]+=instructions[i][f];
     	          }
     	          instructions[i].erase(0,found + 1);
     	          j++;
                }
                //cout << h[1] << endl;
				if (h[0] == "RIGHT"){
                      res+= stoi(h[1]);
				} else if (h[0] == "LEFT"){
					res-= stoi(h[1]);
				}
			}
			if (res >= 360){
				res = res - 360;
			} 
			if (res < 0){
				res = res + 360;
			}
		}
		return res;
	}
};