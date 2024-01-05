#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> s){
		int azimuth = 0;
		int dir = 0;

		for (int i = 0; i < s.size(); i++)
		{
			// left: -90
			if(s[i]=="LEFT"){
				dir-=90;
			}
			// right: +90
			else if(s[i]=="RIGHT"){
				dir+=90;
			}
			// turn around: +180
			else if(s[i]=="TURN AROUND"){
				dir+=180;
			}
			// right x: +x
			else if(s[i]>"RIGHT "){
				char str[s[i].size()];
				copy(s[i].begin(),s[i].end(),str);
				str[s[i].size()]='\0';
				int x = 0;
				if(str[7]=='\0'){
					x = (str[6]-'0');
				}
				else if(str[8]=='\0'){
					x = (str[6]-'0')*10+(str[7]-'0');
				}
				else if(str[9]=='\0'){
					x = (str[6]-'0')*100+(str[7]-'0')*10+(str[8]-'0');
				}
				dir+=x;
			}
			// left x: -x
			else if(s[i]>"LEFT "){
				char str[s[i].size()];
				copy(s[i].begin(),s[i].end(),str);
				str[s[i].size()]='\0';
				int x = 0;
				if(str[6]=='\0'){
					x = (str[5]-'0');
				}
				else if(str[7]=='\0'){
					x = (str[5]-'0')*10+(str[6]-'0');
				}
				else if(str[8]=='\0'){
					x = (str[5]-'0')*100+(str[6]-'0')*10+(str[7]-'0');
				}
				dir-=x;
			}

			// halt: stop execution
			if(s[i]=="HALT"){
				if(dir >= 360){
					azimuth = dir%360;
				} else if(dir < 0){
					azimuth = (dir)%360+360;
				} else {
					azimuth = dir;
				}
				if(azimuth==360){
					return 0;
				}
				return azimuth;
			}
		}
		if(dir >= 360){
			azimuth = dir%360;
		} else if(dir < 0){
			azimuth = (dir)%360+360;
		} else {
			azimuth = dir;
		}
		if(azimuth==360){
			return 0;
		}
		return azimuth;
	}
};