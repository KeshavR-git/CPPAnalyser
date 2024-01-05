#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

class inchworm{
public:
	int lunchtime(int branch,int rest,int leaf){
		int count =0;
		for(int i=0;i*rest<=branch;i++){
			if(i*rest %leaf == 0){
				count =count+1;
			}
		}
		return count;
	}
};