#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;
 
 
class AzimuthMonitoring
{
  public:
    //gets the degree X from string 
   int Deg(string X){
        istringstream iss(X);
        string temp; 
        int deg; 
        iss >> temp >> deg;
        return deg; 
}

  int getAzimuth(vector <string> instructions)
  {
    int res = 0;
    int n = instructions.size();
    int deg ; 
    string X ;
    string temp ; 
    for(int i = 0; i < n; i++) {
      //correct the degree
      if(res < 0) {
        res += 360 ;
      }else if (res >= 360) {
        res -= 360 ;
      }

      temp = instructions.at(i) ;
      //the conditions that change degree 
      if(instructions.at(i) == "LEFT") {
        res -= 90 ;
      }else if(instructions.at(i) == "RIGHT") {
        res += 90 ;
      }else if(instructions.at(i) == "TURN AROUND") {
        res += 180 ;
      }else if(temp[0] == 'L' && temp[4] == ' ') {
        X = instructions.at(i) ;
        deg = Deg(X) ;
        res -= deg;
      }else if(temp[0] == 'R' && temp[5] == ' ') {
        X = instructions.at(i) ;
        deg = Deg(X) ;
        res += deg;
      }else if(instructions.at(i) == "HALT") {
        return res ;
      }
    }

    //final correction
    if(res < 0) {
      res += 360 ;
    }else if (res >= 360) {
      res -= 360 ;
    }

    return res ;
 }
};





