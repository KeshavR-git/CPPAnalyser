#include <cstdlib>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int XX_MARKER_XX;

class CircularLine
{
public:
	int longestTravel(vector<int> t) {

		int size = t.size();

		for (int i = 0; i < size; i++) {
			cout << t[i] << ' ';
		} cout << endl;

		int tempMax = 0;
		int max = 0;
		int dist1 = 0;
		int dist2 = 0;

		for (int start = 0; start < size; start++) {
			for (int stepSize = 0; stepSize < size - 1; stepSize++) {
				tempMax = 0;
				dist1 = 0;
				dist2 = 0;
				for (int forward = 0; forward < stepSize; forward++) {
					dist1 = dist1 + t[(start+forward)%size];
				}
				for (int backward = 0; backward < (size-stepSize); backward++) {
					dist2 = dist2 + t[abs(start-backward+size-1)%size];
				}
				if (dist1 <= dist2) tempMax = dist1;
				else tempMax = dist2;
			}
			if (tempMax > max) max = tempMax;
		}

		return max;
	}	
};