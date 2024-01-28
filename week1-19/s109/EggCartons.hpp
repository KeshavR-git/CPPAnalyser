#include <iostream>
using namespace std;


class EggCartons{
public:
    int minCartons(int n){
        int res=0;
        int type1=6;
        int type2=8;
        if(n%2==0&&n>10){
            if(n/type1>n/type2&& n%type1!=0 &&n%type2!=0){
                res=n/type2+1;
            }
            else if (n/type1<n/type2 && n%type1!=0 &&n%type2!=0){
                res=n/type1+1;

            }
            else if (n%type1==0 && n%type2==0){
                if(n/type1>n/type2){
                    res=n/type2;
                }
                else if (n/type1<n/type2){
                    res=n/type1;
                }
            }
            else if(n%type1==0&& n%type2!=0){
                res=n/type2 +1;
            }
            else if (n%type2==0 &&n%type1!=0){
                res=n/type2;
            }
            
        }
        else if (n==type1||n==type2){
            res=1;
        }
        else{
            res=-1;
        }    
        return res;

       
        
    }    

};