#include <iostream>
using namespace std;
class Inchworm{
public:
	int lunchtime(int branch,int rest,int leaf){
		int count=0;
		for(int i=0;i<=branch;i+=rest){
			if(i%leaf==0){
				count=count+1;
			}
		}
		return count;
	}
};