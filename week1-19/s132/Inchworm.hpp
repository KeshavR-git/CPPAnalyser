#include<iostream>
using namespace std;

class Inchworm{
public:
    int lunchtime(int branch, int rest, int leaf){
    	int tmp=0;
    	int count=0;
    	while(tmp<=branch){
    		if(tmp%leaf==0){
    			count++;
    		}
    		tmp=tmp+rest;
    	}
    	return count;
    }
};


