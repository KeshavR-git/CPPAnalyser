#include <iostream>
using namespace std;
#ifndef INCHWORM_HPP
#define INCHWORM_HPP


 
 
class Inchworm {
public:
	int lunchtime(int branch, int rest, int leaf){
		int res = 0;
		int pos = 0;

		while(pos <= branch){
			if(pos % leaf==0){
				res++;
			}
			pos += rest;
		}

		return res;  // return your result
	}
};

#endif