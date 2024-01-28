#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

class CircularLine
{
	public:
	int longestTravel(vector<int> t)
	{

		// cout << "start" << endl;

		int index = 0;
		int size = 0;

		int cost = 0;
		int pathMin = 0;
		int highestMin = 0;

		size = t.size();

		// cout << "VALUES IN ARRAY ";
		// while (t[index] != 1001){

		// 	cout << t[index] << " ";
		// 	index++;
		// 	size++;
		// }
		// 	cout << endl;

		index = 0;

		// cout << "size of the array is " << size << endl;

		for (int start = 0; start < size; start++){

			for(int end = 0; end < size; end++){

				// add the lowest index unless at start or end

				index = start;
				cost = 0;
				
				// cout << "index  start is " << index << endl;
				// cout << "s " << start << " e " << end << endl;

				// cout << "L ";

				// left direction
				while(index != end){

					// cout << "|" << index << "| ";

					if(index != 0){

						// cout << "n.add " << t[index - 1] << " ";
						cost += t[index - 1];
						index--;
					}
					else if(index == 0){ // edge case

						// cout << "e.add " << t[size-1] << " ";
						cost += t[size - 1];
						index = size - 1;
					}

					// ((currentHolder % N) + N) % N
				}

				pathMin = cost;

				// cout << "completed left with " << cost << endl;

				index = start;
				cost = 0;

				// cout << "R ";

				// right direction
				while(index != end){

					// cout << "|" << index << "| ";
					if(index != size - 1){

						// cout << "n.add " << t[index] << " ";
						cost += t[index];
						index++;
					}
					else{

						// cout << "e.add " << t[0] << " ";
						cost += t[size - 1];
						index = 0;
					}
				}

				if (cost < pathMin){

					pathMin = cost;
				}

				// cout << "completed right with " << cost << endl;

				if (pathMin > highestMin){

					highestMin = pathMin;

					// cout << "NEW HIGHEST MIN " << highestMin << endl;
				}
			}
		}

		// cout << "finished all" << endl;

		return highestMin;
	}
};