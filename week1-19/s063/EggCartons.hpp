#include <iostream>
#include <vector>
using namespace std;
 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {

    int res ;
    int temp ;
    vector <int> min ; 

    int eights[12] ;
    int sixs[16] ;

    //set array to muliples of 8 
    for(int i = 0; i < 12; i++) {
      eights[i] = 8 * (i+1) ;
    }

    //set array to multiples of 6
    for(int i = 0; i < 16; i++) {
      sixs[i] = 6 * (i+1) ;
    }

    //conditions 
    if(n % 2 == 0) {
      if(n < 6) {
        return -1 ;
      }else if(n % 8 == 0) {
        res = n/8 ;
        return res ;
      }else if(n % 6 == 0) {
        temp = n/6 ;
        min.push_back(temp) ; 
      }
    }else{
      return -1 ;
    }

    int j = 0 ;
    int check ;

    while (j < 16) {
      for(int i = 0; i < 12; i++) {
        check = sixs[j] + eights[i] ;
        if(check == n) {
          temp = (j+1) + (i+1);
          min.push_back(temp) ;
        }
      }
      j++ ;
    }

    int size = min.size() ;
    if(size == 0) {
      return -1 ;
    }

    int minimum = 100 ;
    for(int i = 0; i < size; i++) {
      if(min.at(i) < minimum) {
        minimum = min.at(i) ;
      }
    }
    return minimum ;
  }
};





