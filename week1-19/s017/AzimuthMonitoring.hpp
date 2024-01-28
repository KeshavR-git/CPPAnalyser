#include <vector>
#include <cstring>
using namespace std; 

 
class AzimuthMonitoring {
  	public:
  	int getAzimuth(vector<string> cmds) {
  		int angle = 0;
		string temp1, temp2;

  		for (int i = 0; i < cmds.size(); i ++) {
			if (cmds[i].substr(0, 4) == "LEFT") {
				if (cmds[i].length() > 4) {
					angle -= stoi(cmds[i].substr(5, 3));
				}
				else angle -= 90;
				
				while (angle < 0) {
					angle += 360;
				}
			}
			else if (cmds[i].substr(0, 4) == "RIGH") {
				if (cmds[i].length() > 5) {
					angle += stoi(cmds[i].substr(6, 3));
				}
				else angle += 90;

				angle = angle%360;
			}
			
			else if (cmds[i].substr(0, 4) == "TURN") {
				angle = (angle + 180)%360;
			}
			
			else if (cmds[i].substr(0, 4) == "HALT") {
				return angle;
			}
  		}
		return angle;
  	}
};