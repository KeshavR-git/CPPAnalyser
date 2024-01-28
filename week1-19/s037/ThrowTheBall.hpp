#include <iostream>
#include <stdlib.h>
using namespace std;

 
class ThrowTheBall{
    public:

   	int timesThrown(int N, int M, int L){
   		//NOTE: all pointer related code used due to help from peer to work with pointers rather than normal arrays
   		int * times = new int [N];	//number of times a player had ball
   		//initialise array
   		for (int i = 0; i < N; i++){
   			* (times + i) = 0;
   		}

   		* times = 1;			//sets to 1
   		int currentPos = 1;		//current positon of the ball
   		int count = 0;			//total counter for the ball

   		while (* (times + currentPos - 1) < M){
   			//even
   			if(* (times + currentPos - 1) % 2 == 0){
   				currentPos -= L;
   				//reset position to stay in range
   				while(currentPos < 1){
   					currentPos += N;
   				}
   			}
   			//odd
   			else{
   				currentPos += L;
   				//reset position to stay in range
   				while(currentPos > N){
   					currentPos -= N;
   				}
   			}
   			count++;
   			(* (times + currentPos - 1))++;
   		}
   		delete [] times;
   		return count;
   	}
};	