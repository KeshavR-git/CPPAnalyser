#include <iostream>
using namespace std;

class EggCartons{
public:
	int minCartons(int n){

		int count=0;
		while(n%8!=0&&n>0){
			n-=6;
			count++;
		}
		if(n>=0){
			return count+n/8;
		}else{
			return -1;
		}

	
}
};



