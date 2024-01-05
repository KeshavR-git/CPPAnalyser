#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;

 
class CircularLine{
  public:
  
  int longestTravel(vector<int> t){
    int totalLine = 0;
    int lline = 0; 

    //get sum of the elements
    for(int i = 0; i < t.size(); i++){
      totalLine += t[i];
    }

    //to get the max of the longestline, get max of minimum of the
    // currentpos and difference of the sum and currentpos
    for(int j = 0; j < t.size(); j++){
      int currentPos = 0;
      for(int k = j; k < t.size(); k++){
        currentPos += t[k];
        int Min = min(currentPos, totalLine - currentPos);
        lline = max(lline, Min);
      }
    }

    return lline;
  }

};