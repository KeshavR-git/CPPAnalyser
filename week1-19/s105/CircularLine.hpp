#include <iostream>
#include <vector>

#ifndef CIRCULARLINE_H
#define CIRCULARLINE_H

class CircularLine{

public:
  int min(int x , int y, std::vector<int> input){
    int min = 0;
    int min2 = 0;
    int a = x;
    int b = y;
    
  //going right
    if(b>a){
      for(int i = a;i<b;i++){
        min = min+input[i];
      }
    }else{
      for(int i = a; i<input.size(); i++){
        min = min+input[i];
      }
      for(int i = 0;i<b;i++){
        min = min+input[i];
      }
    }

    if(b>a){
      for(int i = (a-1); i>=0;i--){
        min2=min2+input[i];
      }
      int temp = input.size()-1;
      for(int i = temp;i>=b;i--){
        min2=min2+input[i];
      }
    }else{
      for(int i = (a-1);i>=b;i--){
        min2 = min2+input[i];
      }
    }


    if(min<min2){
      return min;
    }else{
      return min2;
    }
  }

  int longestTravel(std::vector<int> input){
    int count = 0;
    for(int i = 0; i<input.size();i++){
      for(int j = 0 ; j<input.size();j++){
        if(i != j){
            int temp = min(i,j,input);
            if(temp>count){
              count = temp;
            }
        }
      }
    }


    return count;
  }


};
#endif
