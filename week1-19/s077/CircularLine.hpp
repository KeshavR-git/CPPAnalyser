#include <iostream>
#include <vector>
using namespace std;

class CircularLine{
public:
	int longestTravel(vector<int> t){
		int maxTime=0;
		int shortestRoute=0;
		int currentTimeFirstRoute;
		int currentTimeSecondRoute;
		int numStops=t.size();
		//cout << numStops << endl;

		for(int i=0;i<numStops-1;i++){
			for(int j=i+1;j<numStops;j++){
				//cout << "begin at " << i << " end at " << j << endl;
				currentTimeFirstRoute=0;
				currentTimeSecondRoute=0;

				for(int k=i;k<j;k++){
					//cout << "adding segment " << k << " to first" << endl;
					currentTimeFirstRoute=currentTimeFirstRoute+t[k];
				}

				for(int k=0;k<i;k++){
					//cout << "adding segment " << k << " to second" << endl;
					currentTimeSecondRoute=currentTimeSecondRoute+t[k];
				}

				for(int k=j;k<numStops;k++){
					//cout << "adding segment " << k << " to second" << endl;
					currentTimeSecondRoute=currentTimeSecondRoute+t[k];
				}

				if(currentTimeFirstRoute>currentTimeSecondRoute){
					if(currentTimeSecondRoute>maxTime){
						maxTime=currentTimeSecondRoute;
					}
				} else {
					if(currentTimeFirstRoute>maxTime){
						maxTime=currentTimeFirstRoute;
					}
				}

				//cout << maxTime << endl;

			}
		}
		return maxTime;
	}
	
};