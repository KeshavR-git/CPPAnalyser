#include<cmath> 
#include <iostream>
class EggCartons {
public:
	int minCartons(int n){
		if(n%2==0 && n>=6){
			int min = n;
			for(int y=0;y<=floor(n/8); y++){
				float x = (n/6.0)-((8.0*y)/6.0);
				if(floor(x)==ceil(x)){
					if((y+x)<min){
						min=y+x;
					}
				}
			}
			if(min!=n){
				return min;
			}else {
				return -1;
			}
		}else{
			return -1;
		}
	}
};