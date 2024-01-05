#include <iostream>
#include<string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
 
 
class StreetParking
{
  public:
  int freeParks(string street)
  {

    vector <int> v; 

    street.insert (0, 1, '<');
    street.insert (0, 1, '<');
    street += '>';
    street += '>';

    int n = street.size();
    int res = 0; 

    for(int i = 0; i < n; i++) {
      if(street[i] == '-'){
        res ++ ;
        if(street[i+1] == 'B'){
          res--;
        }else if(street[i+2] == 'B'){
          res--; 
        }else if(street[i+1] == 'S'){
          res--;
        }else if(street[i-1] == 'S'){
          res--;
        }
      }
    }
    return res; 
 }
};





