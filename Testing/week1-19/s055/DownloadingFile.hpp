#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class DownloadingFiles{
public:
	double actualTime(vector <string> tasks){
		int number_o_tasks=tasks.size();
		double totalsize=0;
		double bandwidth=0;
		for (int i = 0; i < number_o_tasks; ++i)
		{
			int space=tasks[i].find(" ");
			int speed=stoi(tasks[i].substr(0,space));
			int timeNeeded=stoi(tasks[i].substr(space));
			bandwidth+=speed;
			totalsize+=(speed*timeNeeded);
		}
		
	return totalsize/bandwidth;
}
};

