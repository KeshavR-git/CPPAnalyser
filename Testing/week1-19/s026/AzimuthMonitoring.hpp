#include <vector>
#include <string>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring {
public:
	int getAzimuth(vector<string> instructions) {
		int degrees=0;
		for(int i=0;i<instructions.size();i++) {
			stringstream ss;
			string temp;
			int X;
			ss<<instructions[i];
			ss>>temp;
			ss>>X;
			if (instructions.at(i)== "RIGHT") {
				degrees=degrees+90;
			} else if (instructions.at(i)== "LEFT") {
				degrees=degrees-90;
			} else if (instructions.at(i)== "TURN AROUND") {
				degrees=degrees+180;
			} else if (instructions.at(i)== "HALT") {
				return degrees;
			} else if (temp== "LEFT") {
				degrees=degrees-X;
			} else if (temp== "RIGHT") {
				degrees=degrees+X;
			}
			if (degrees<0) {
				degrees=degrees+360;
			}
			if (degrees>360) {
				degrees=degrees-360;
			}
			if (degrees==360) {
				degrees=0;
			}
		}
		return degrees;
	
}
};