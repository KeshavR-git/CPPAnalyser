#include <iostream>
using namespace std;
int XX_MARKER_XX;


class Inchworm{
public:
	int lunchtime(int branch, int rest, int leaf){
		int res = 0;
		//that will count the result about the eating of INchworm
		int distance = 0;
		while (distance<=branch){
			//that the while to coculate the whole branch of that 
			if(res == 0){
				//set the start eating 1
				res++;
			}

			if(distance%leaf == 0 && distance != 0){
				//if that leaf which inchworm can rest that will have eating
				res++;
			}
			distance+=rest;
			//move on

		}
		return res;
	}
};