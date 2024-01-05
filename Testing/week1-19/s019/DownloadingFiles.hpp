#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles {
public:
	double actualTime(vector<string> tasks) {
		double kb=0; 
		double bandwidth=0;

		for (int i = 0; i < tasks.size(); ++i)
		{
			int speed=0;
			int timeRemaining=0;
			istringstream iss(tasks[i]);
			iss >> speed;
			iss >> timeRemaining;
			kb = kb + speed*timeRemaining;
			bandwidth = bandwidth + speed;
		}
		double res= kb/bandwidth;
		return res;
	}
};