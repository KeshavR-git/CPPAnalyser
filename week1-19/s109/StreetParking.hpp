#include <iostream>
using namespace std;


class StreetParking{
public:
    int freeParks(string street){
        int counter=0;
        int P[street.length()];
        for(int i =0;i<=street.length();i++){
            if (street[i]=='-'&&street[i+1]!='B'&&street[i+2]!='B'&&street[i+1]!='S'&&street[i-1]!='S'){
                P[i]=1;
            }
            else if (street[i]=='D'||street[i]=='B'||street[i]=='S'){
                P[i]=0;
            }
            else{
                P[i]=0;
            }
        }
        for(int i =0;i<=street.length();i++){
            if(P[i]==1){
                counter++;
            }   
        } 
        return counter;   
    }
};