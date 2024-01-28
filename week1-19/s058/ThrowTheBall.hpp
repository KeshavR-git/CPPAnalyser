#include <iostream>
 using namespace std;

 class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		int ptimearray[N];
		//create one array to store each person catch times
		for(int i = 0; i<N; i++){
			ptimearray[i] = 0;
			//initialise is 0
		}
		int stopset = 1;
		//check what time will stop that game
		int position = 0;
		//track the whoe game
		int res = 0;
		//the result which about times of pass
		ptimearray[position] = 1;
		//at first ball in player1 hands
		while (stopset != M){
			//if p times is even
			if (ptimearray[position]%2 == 0){
				if (position+L <N){
					position+=L;
				} else {
					//out range
					position = (position+L)-N;
				}
				ptimearray[position]++;
			} else {
				// if p times us odd
				if (position-L >=0){
					position-=L;
				} else {
					//if that is out range
					position = (position-L)+N;
				}
				ptimearray[position]++;
			}
			//update the stopset
			stopset = ptimearray[position];
			//update res.
			res++;
		}
		return res;
	}
 };