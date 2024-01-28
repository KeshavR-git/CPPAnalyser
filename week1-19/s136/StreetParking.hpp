#include <iostream>
#include <string>
using namespace std;


class StreetParking{
public:
    int freeParks(string street){
        int res=0;
        for (unsigned int i=0;i<street.size();i++){
            bool ishave=true;
            if (street[i]=='D')
                ishave=false;
            if (street[i]=='B')
                ishave=false;
            if (street[i]=='S')
                ishave=false;
            if (i<=street.size()-2&&street[i+1]=='B')
                ishave=false;
            if (i<=street.size()-3&&street[i+2]=='B')
                ishave=false;
            if (i<=street.size()-2&&street[i+1]=='S')
                ishave=false;
            if (i>=1&&street[i-1]=='S')
                ishave=false;

            if (ishave)
                res=res+1;
        }
        return res;
    }
};
