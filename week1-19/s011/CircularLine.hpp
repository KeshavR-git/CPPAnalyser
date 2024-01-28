#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// start at s, end at e
int minimumTravel(vector<int> t, int s, int e){
	int distanceLeft=0;
	int i=s;
	//Go left (counter-clockwise / negative direction)
	while (i!=e){ // while not at the end
		//move left a station towards end e
		// cout<<"i: "<<i<<'\n';
		i--;
		if (i<0)
			i=t.size()-1;
		distanceLeft += t[i];
	}
	i=s;
	int distanceRight=0;
	while (i!=e){
		// cout<<"i: "<<i<<'\n';
		distanceRight += t[i];
		i = (i+1)%t.size();
	}
	return min(distanceLeft, distanceRight);
}

class CircularLine
{
	public:
	int longestTravel(vector<int> t)
	{
		int maximum=0;
		for (int i=0; i<t.size(); i++){
			for (int j=i; j<t.size(); j++){
				maximum = max(maximum, minimumTravel(t, i, j));
			}
		}
		return maximum;
	}
};

