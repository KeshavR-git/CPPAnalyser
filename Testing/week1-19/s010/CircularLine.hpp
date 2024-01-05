#include <vector>
#include <iostream>	// for debugging
using namespace std;
int XX_MARKER_XX;


class CircularLine {
public:
	int longestTravel(vector<int> t) {
		int no_stations = t.size();
		
		// create 2D array (start x end)
			int **array = new int*[no_stations];
			for (int i = 0; i < no_stations; i++) {
				array[i] = new int[no_stations];
			}
		
		// initialize array
			for(int i = 0; i < no_stations; i++) {
				for(int j = 0; j < no_stations; j++) {
					array[i][j] = 0;
				}	
			}
	
		/* fill t-array with actual distances NB: 
			i = start, 			j = end,
			h = next_stop_back (if going back; keep going back one stop until reach j)
			sum = total_of_this_path (used for backwards)
		  * if i = j, t=0 (no time to get to itself)
		  * matrix is symmetric, so don't need to consider other half
		*/	for(int i = 0; i < no_stations; i++) {
				for(int j = i+1; j < no_stations; j++) {
					// first, consider going forward toward j
						// from i to j can be considered as i to j-1, then from j-1 to j (which is j-1 in t)
						array[i][j] = array[i][j-1] + t[j-1];
							
					// then consider going the otherway
						// look at stop before i, then store the time to get to that stop
						int b = i - 1;
						while(b < 0) {
							b += no_stations;
						}
						
						int sum = t[b];
						
						// keep going back one stop, until reach j & keep increasing t until there
						while(b != j) {
							b--;
							while(b < 0) {
								b += no_stations;
							}
							sum += t[b];
						}
						
						// then, if backward path is faster, replace the element
						if(sum < array[i][j]) {
							array[i][j] = sum;
						}
				}
			}
		
		// find max in array
			int max = 0;
			for(int i = 0; i < no_stations; i++) {
				for(int j = 0; j < no_stations; j++) {
					if(array[i][j] > max) {
						max = array[i][j];
					}
				}
			}
			
	// clean heap
		for(int i = 0; i < no_stations; i++) {
			delete[] array[i];
		}
		delete[] array;

	// return
		return max;
	}
};