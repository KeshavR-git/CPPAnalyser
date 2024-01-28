#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 

class StreetParking
{

  public: 
  int freeParks(string street)
  {
  	 // your code for the problem.
  	int count=0;
    int length=street.length();
  	int pos[length];

    //initialize the array elements with 1
    for(int i=0; i<length;i++){
      pos[i]=1;
    }

    //Travse the string do different opeartion when encounter different char
    for(int i=0;i<length;i++){
  		if(street[i]=='B'){
        pos[i-2]=0;
        pos[i-1]=0;
        pos[i]=0;
  		}
      else if(street[i]=='D'){
        pos[i]=0;
      }
      else if(street[i]=='S'){
        pos[i-1]=0;
        pos[i]=0;
        pos[i+1]=0;
      }
  	}

    //Sum the array
    for(int i=0; i<length;i++){
      count=count+pos[i];
    }

    return count;  // return your result
  }
};

