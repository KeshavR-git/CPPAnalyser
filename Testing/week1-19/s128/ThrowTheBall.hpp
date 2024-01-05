#include <iostream>
using namespace std;
int XX_MARKER_XX;
 

class ThrowTheBall
{

  public: 
  int timesThrown(int N, int M, int L)
  {
  	 // your code for the problem.	
    //create an array to store times and initialize the element to 0
  	int p[N];
    for(int i=0;i<N;i++){
      p[i]=0;
    }
    //track the loop times
    int count=0;
    int num=1;
    p[0]=1;
    //cout<<p[num-1]<<endl;
    //cout<<M<<endl;
  	while(p[num-1]<M){ //check the times of previous player and decide break the loop or not
     // cout<<"*****"<<count<<"*****"<<endl;
      if(p[num-1]%2==1){//the times is odd, pass the ball to right L player
        if(num<=L){
          num=num+N-L;
        }else{
          num=num-L;
        }

      }else{//the times is even, pass the ball to left L player
        if((num+L)>N){
          num=(num+L)%N;
        }else{
          num=num+L;
        }
      }
      p[num-1]++;
      count++;
  	}
   
    return count;  // return your result
  }
};


