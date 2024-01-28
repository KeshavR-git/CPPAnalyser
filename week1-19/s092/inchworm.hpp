#include <iostream>
using namespace std;


class Inchworm{
private:
	int res = 0;
public:
	int lunchtime(int branch, int rest, int leaf){
		for (int i = 0; i <= branch; i+=rest)
		{
			if(i%leaf==0){
				res++;
			}

		}
		return res;
	}
};
