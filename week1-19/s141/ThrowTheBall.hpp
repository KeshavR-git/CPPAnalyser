#include <iostream>
#include <vector>
using namespace std;

class ThrowTheBall{
public:
	int timesThrown(int n, int m, int l){
		vector<int> circle(n);
		int location=0;
		int times=0;

		for(int i=0;i<n;i++){
			circle[i];
		}

		while(circle[location]<m){
			circle[location]++;
			if(circle[location]==m){
				return times;
			}
			if(circle[location]%2!=0){
				location=(location+l)%n;
			}
			else{
				location-=l;
				if(location<0){
					location+=n;
				}
			}
			times++;
		}
		return times;
	}
};
