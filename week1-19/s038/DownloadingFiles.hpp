#include <iostream>
#include <string>
#include <vector>
using namespace std;
class DownloadingFiles
{
public:
	double actualTime(vector<string> tasks){
	  int num_tasks = tasks.size();
	  double download_speed[num_tasks];
	  double download_time[num_tasks];
	  double sum = 0;
	  double total_speed = 0;
	  for (int i = 0; i < num_tasks; ++i)
	  {
	    download_speed[i] = stod(tasks[i]);
	    int len = tasks[i].length();
	    for (int j = 0; j < len; ++j)
	    {
	      if(tasks[i][j] == ' ')
	        {
	          download_time[i] = stod(tasks[i].substr(j,len));
	        }
	    }
	    sum = sum + download_speed[i]*download_time[i];
	    total_speed = total_speed + download_speed[i];
	   
	  }
	  return sum/total_speed;
	}

};