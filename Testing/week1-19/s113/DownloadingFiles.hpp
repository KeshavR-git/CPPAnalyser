#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
#include<iostream>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles{
public:
	double actualTime(vector<string> tasks){
		int totalBandwidth = 0;
		int totalData = 0;

		for(unsigned int i = 0; i < tasks.size(); i++){
			stringstream ss;
			ss.flush();
			//Use a stringstream to pull the integers from the string
			ss << tasks[i];
			int kbps;
			int timeLeft;
			ss >> kbps >> timeLeft;

			totalBandwidth += kbps;
			totalData += kbps * timeLeft;
		}

		return (double)totalData/(double)totalBandwidth;
	}
};