#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std; 

class CircularLine
{

  public: 
  int longestTravel(vector<int> t)
  {
     // your code for the problem.
    int count=0;
    int sum=0;
    int length=t.size();
    int max=0;

   

    //sum the array elements
    for(int i=0; i<length;i++){
      sum=sum+t[i];
    }

    //Two layers of for loop to find the max from different starting position to other ending position 
    for(int i=0;i<length;i++)
      for (int j=0;j<length;j++){

        //calculate the distance from i to j
        int k=i;
        int label=0;
        while(k!=j){
          label=label+t[k];
          k=(k+1)%length;
        }

        if(label>(sum-label)){
          label=sum-label;
        }

        if(max<label){
          max=label;
        }     
    }
      
    
    return max;  // return your result
  }
};

