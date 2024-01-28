#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
#include <vector>
using namespace std;
 
class  DownloadingFiles{
public:
	double actualTime(vector<string> tasks){
		double size = 0;
		double bandwidth = 0;
		while(!tasks.empty()){
			double speed = 0;
			int index = tasks[0].find(" ");
			double thisSpeed = stoi( tasks[0].substr(0,index + 1));
			double thisTime = stoi( tasks[0].substr(index));
			size = size + thisSpeed * thisTime;
			bandwidth = bandwidth + thisSpeed;
			tasks.erase(tasks.begin());
		}
		return size/bandwidth;
	}
};