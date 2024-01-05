#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int XX_MARKER_XX;
 
class AzimuthMonitoring
{
	public:
		int getAzimuth(vector <string> instructions){
			int ans=0;
			for(int i=0; i<instructions.size(); i++){
				string input = instructions[i];
				if(input == "HALT")
					break;
				else if(input == "LEFT")
					ans -= 90;
				else if(input == "RIGHT")
					ans += 90;
				else if(input == "TURN AROUND")
					ans += 180;
				else{
					stringstream a(input);
					string direction;
					int angle;
					a >> direction >> angle;
					if(direction == "LEFT"){
						angle *= -1;
					}
					ans += angle;
				}
			}
			ans = ((ans%360)+360)%360;
			return ans;
		}
};
