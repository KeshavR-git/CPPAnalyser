#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DownloadingFiles
{
	public:
	double actualTime(vector<string> tasks)
	{
		double bandwidth = 0;
		double totalDownload = 0;
		for (int i=0; i<tasks.size(); i++){ // for each string in tasks[]
			// cout<<"i: "<<i<<'\n';
			int spaceIndex=0;
			while (tasks[i][spaceIndex] != ' ')
				spaceIndex++;
			double speed = stod(tasks[i].substr(0, spaceIndex));
			double time  = stod(tasks[i].substr(spaceIndex+1, tasks[i].length()-spaceIndex-1));
			bandwidth +=speed;
			totalDownload += speed * time;
		} 
		return totalDownload/bandwidth;
	}
};

