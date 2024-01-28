#include <iostream>
#include <vector>
#include <string>

class CircularLine
{
  public:
  int longestTravel(std::vector<int> t)
  {
    int longestTravel = 0;

    for(int i = 0; i < t.size(); i++){
      for(int j = i+1; j < t.size(); j++){
        int travelTimeForward = 0;
        int travelTimeBackward = 0;

        for(int k = 0; k < j - i; k++){
          travelTimeForward += t[(i + k) % t.size()];
        }

        for(int k = 0; k < t.size() - (j - i); k++){
          travelTimeBackward += t[(j + k) % t.size()];
        }

        if(travelTimeForward < travelTimeBackward && travelTimeForward > longestTravel){
          longestTravel = travelTimeForward;
        } else if(travelTimeBackward < travelTimeForward && travelTimeBackward > longestTravel){
          longestTravel = travelTimeBackward;
        } else if(travelTimeForward == travelTimeBackward && travelTimeForward > longestTravel){
          longestTravel = travelTimeForward;
        }
      } 
    }

    return longestTravel;
  }
};