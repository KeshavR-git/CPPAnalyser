#include <vector>
#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles
{
public:
	double actualTime (vector <string> tasks) {
		int fileNum= tasks.size();
		vector <double> speedVec;
		vector <double> timeVec;
		for (int i= 0; i< fileNum; i++){
			string aim = tasks[i];
			bool isspeed = true;
			string speedStr = "";
			string timeStr = "";
			double speeds = 0.0;
			double times = 0.0;
			for (int j= 0; j< aim.length(); j++){
				if (aim[j] == ' '){
					isspeed = false;
				}
				if (isspeed == true){
					speedStr += aim[j];
				}
				else {
					timeStr += aim[j];
				}
			}
			speeds = stod(speedStr);
			times = stod(timeStr);
			speedVec.push_back(speeds);
			timeVec.push_back(times);
		}

		double speedTotal = 0;
		double bitTotal = 0;
		for (int c= 0; c< fileNum; c++) {
			speedTotal += speedVec[c];
			bitTotal += speedVec[c]*timeVec[c];

		}
		return bitTotal/speedTotal;
	}
};