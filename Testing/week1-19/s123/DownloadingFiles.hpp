#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class DownloadingFiles
{
public:
	double actualTime(vector<string> task)
	{
		double counter = 0;
		int minTime;
		int extraBandwith = 0;

		vector<int> timeLeft(task.size());			//time remaining of each downlaod
		vector<int> bandwith(task.size());			//bandwith of each download


		for (int i=0; i<task.size(); i++) {			//i initially went for the manual way of adding things into strings and convert into int
			istringstream iss (task[i]);			//but when i was googling the istringstream syntax i realized that it can convert it directly like this 
			iss >> bandwith[i];						//they used it in the syntax example
			iss >> timeLeft[i];						//though in a way, i still feel a bit guilty about a bit of cheating by using this easy function
		}

		for (int i=0; i<task.size(); i++) {
			minTime = min_element(timeLeft.begin(), timeLeft.end()) - timeLeft.begin();
			counter += ((timeLeft[minTime] - counter) * bandwith[minTime]) / (bandwith[minTime] + extraBandwith);		//add the counter with the remaining amount of time for the download
			//the extra bandwith will be dedicatedly allocated for the one that closest to finish
			extraBandwith += bandwith[minTime];

			timeLeft.erase(timeLeft.begin() + minTime);
			bandwith.erase(bandwith.begin() + minTime);
		}
		return counter;
	};

};