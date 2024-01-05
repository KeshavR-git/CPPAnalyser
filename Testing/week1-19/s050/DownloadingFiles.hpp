#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <algorithm>
int XX_MARKER_XX;
#ifndef DOWNLOADINGFILES_H
#define DOWNLOADINGFILES_H


class DownloadingFiles
{
	// Convert a string of numbers to an integer
	int stringToInt(std::string numbers)
	{
		int num = 0;
		std::vector<int> tenExpon;
		for (int i=0; i<numbers.length(); i++)
		{
			switch (numbers.at(i))
			{
				case '0' :
					tenExpon.push_back(0);
					break;
				case '1' :
					tenExpon.push_back(1);
					break;
				case '2' :
					tenExpon.push_back(2);
					break;
				case '3' :
					tenExpon.push_back(3);
					break;
				case '4' :
					tenExpon.push_back(4);
					break;
				case '5' :
					tenExpon.push_back(5);
					break;
				case '6' :
					tenExpon.push_back(6);
					break;
				case '7' :
					tenExpon.push_back(7);
					break;
				case '8' :
					tenExpon.push_back(8);
					break;
				case '9' :
					tenExpon.push_back(9);
					break;
			}
		}
		// Use the position in the vector to determine magnitude
		for(int k=0; k<tenExpon.size(); k++)
		{
			num = num + tenExpon[k]*pow(10.0,(tenExpon.size()-k-1));
		}
		return num;
	}

public:
	// Function to determine the total time for all downloads to complete
	double actualTime(std::vector<std::string> tasks)
	{
		double totalTime = 0;
		std::vector<int> bands;
		std::vector<double> times;
		std::vector<std::string> fillIn;
		
		// Fill the vectors of bandwidths and times
		for (int i=0; i<tasks.size(); i++)
		{
			// Split each element of the input
			std::istringstream ss(tasks.at(i));
			std::string token;
			while (getline(ss, token, ' '))
			{
				fillIn.push_back(token);
			}

			// Put the numbers in the appropriate vectors
			bands.push_back(stringToInt(fillIn.at(0)));
			times.push_back(stringToInt(fillIn.at(1)));
			
			fillIn.clear();
		}

		int excessBand;
		double minTime;

		// Iterate until there are no more downloads to finish
		while (times.size()>0)
		{
			// Find the minimum time, add to total time
			excessBand = 0;
			minTime = *(std::min_element(times.begin(), times.end()));
			totalTime = totalTime + minTime;
			// Remove the minimum time from all download times
			for (int i=0; i<times.size(); i++)
			{
				times.at(i) = times.at(i)-minTime;
				// When a time equal zero, remove it
				if (times.at(i)==0)
				{
					excessBand = excessBand + bands.at(i);
					times.erase(times.begin()+i);
					bands.erase(bands.begin()+i);
					i--;
				}
			}
			// Disperse remaining bandwidth to next in queue
			if (times.size()>0)
			{
				times.at(0) = times.at(0)*bands.at(0)/(bands.at(0) + excessBand);
				bands.at(0) = bands.at(0) + excessBand;
			}
		}

		return totalTime;
	}
};

#endif