#include <algorithm>
#include <vector>
#ifndef CIRCULARLINE_H
#define CIRCULARLINE_H


class CircularLine
{
public:
	// Function to find the longest time between two stations, despite minimised
	int longestTravel(std::vector<int> t)
	{
		int maxTime = 0;
		int maxOfTwo = 0;

		// Iterate through first station
		for (int i=0; i<t.size()-1; i++)
		{
			// Iterate through second station
			for (int j=1; j<t.size(); j++)
			{
				int forwards = i;
				int backwards = i;
				maxOfTwo = 0;
				int total = 0;

				// Determine time between stations going forwards
				while (forwards!=j)
				{
					// Rotate to front of array
					if (forwards>=t.size())
					{
						forwards = 0;
					}

					total = total + t.at(forwards);
					forwards++;
				}
				maxOfTwo = total;
				total = 0;

				// Determine time between stations going backwards
				while (backwards!=j)
				{
					backwards--;

					// Rotate to back of array
					if (backwards<0)
					{
						backwards = t.size()-1;
					}

					total = total + t.at(backwards);
				}

				// Keep smaller of two times
				if (maxOfTwo>total)
				{
					maxOfTwo = total;
				}

				// Record longest overall time
				if (maxOfTwo>maxTime)
				{
					maxTime = maxOfTwo;
				}
			}
		}

		return maxTime;
	}
};

#endif