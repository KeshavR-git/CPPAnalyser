#include <iostream>
#include <vector>
#include <string>

class DownloadingFiles
{
public:
	double actualTime(std::vector<std::string> tasks)
	{
		int numTasks = tasks.size();

		//	Split into speed and remaining time (rem_time)
		std::vector<double> speed;
		std::vector<double> rem_time;

		for(int i=0; i<(numTasks); i++)
		{
			rem_time.push_back(std::atoi(tasks[i].substr(tasks[i].find(" ") + 1).c_str()));
			speed.push_back(std::atoi(tasks[i].substr(0,tasks[i].find(" ")).c_str()));
		}

		//	Organise the vector to be from smallest to largest
		std::vector<double> sorted_speed;
		std::vector<double> sorted_rem_time;		

		for(int i=0; i<(numTasks);i++)
		{
			double min_speed = speed[0];
			double min_rem_time = rem_time[0];
			int loc_min = 0;
			
			for(int j=1; j<rem_time.size();j++)
			{
				if(rem_time[j]<min_rem_time)
				{
					min_rem_time = rem_time[j];
					min_speed = speed[j];
					loc_min = j;
				}
			}

			speed.erase(speed.begin() + loc_min);
			rem_time.erase(rem_time.begin() + loc_min);

			sorted_speed.push_back(min_speed);
			sorted_rem_time.push_back(min_rem_time);
		}

		//	Calculate the total time of the download
		double total_time = 0;
		for(int i=0; i<numTasks; i++)
		{
			//	sum all remaining times
			total_time = total_time + sorted_rem_time[0];

			if(sorted_rem_time.size()>=2)
			{
				//	Calculate the task's new speed
				double new_speed = (sorted_speed[0]+sorted_speed[1]);

				//	Calculate its remaining time
				sorted_rem_time[1] = (sorted_rem_time[1]-total_time) * (sorted_speed[1] / new_speed );
				sorted_speed[1] = new_speed;
			}
			//	Erase the completed task from the list
			sorted_speed.erase(sorted_speed.begin());
			sorted_rem_time.erase(sorted_rem_time.begin());
		}

		return total_time;
	}
};