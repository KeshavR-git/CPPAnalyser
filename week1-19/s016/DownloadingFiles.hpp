#include <iostream>
#include <vector>
using namespace std;


class DownloadingFiles
{
	public:
		double actualTime(vector<string> tasks) {

			int totalDown = 0;
			int totalSize = 0;
			double totalTime;

			// Runs once for every string in the input array
			for (int i = 0; i < tasks.size(); i++) {

				string downspeed = "";
				string time = "";
				int j = 0;

				// Put the download speed into a variable
				while (tasks.at(i).at(j) != ' ') {
					downspeed += tasks.at(i).at(j);
					j++;
				}

				// Put the amount of time into a variable
				while (j < tasks.at(i).length()) {
					time += tasks.at(i).at(j);
					j++;
				}

				// Add to our total
				totalDown += stoi(downspeed);
				totalSize += stoi(time) * stoi (downspeed);

			}

			// Calculate the total time
			totalTime = (double)totalSize / (double)totalDown;

			return totalTime;

		}
	

};