#include <iostream>
#include <string>
using namespace std;
class StreetParking
{
  public:
    int freeParks(string street){
        int length=street.length();
        string temp=street;
        for(int i=0;i<length;i++){
          if(street[i]=='D'){
            temp[i]='P';
          }
          if(street[i]=='B'){
            temp[i]='P';
            if(i!=0){
            temp[i-1]='P';
            }
            if(i!=1){
            temp[i-2]='P';
            }
          }
          if(street[i]=='S'){
            temp[i]='P';
            if(i!=0){
              temp[i-1]='P';
            }
            if(i!=length-1){
            temp[i+1]='P';
            }
          }
        }
        int result=0;
        for(int i=0;i<length;i++){
          if(temp[i]!='P'){
            result++;
          }
        }
        return result;
    }

};
