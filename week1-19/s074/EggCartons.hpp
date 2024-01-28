#include <iostream>
using namespace std;
#ifndef EGGCARTONS_HPP
#define EGGCARTONS_HPP


class EggCartons {

public:  
  
  int minCartons(int n) {
    
    if(n%2==1){          
      return -1;
    }
    
    else if(n<6){
      return -1;
    }
    
    else if(n==6){
      return 1;
    }
    
    else if(n==8){
      return 1;
    }
    
    else{
      int eggs1 = minCartons(n-6);
      int eggs2 = minCartons(n-8);
      
      if(eggs1!=-1 && eggs2!=-1)
        return min(eggs1, eggs2)+1;
      
      else if(eggs1==-1 && eggs2!=-1)
        return eggs2+1;
      
      else if(eggs1!=-1 && eggs2==-1)
        return eggs1+1;
      
      else
        return -1;
    }
  }
};
#endif 