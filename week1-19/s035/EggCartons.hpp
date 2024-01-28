#include <iostream>
using namespace std;

class EggCartons{

public:
    int minCartons(int n){
        int counter = 0;
        int counter2 = 0;
                
       if ( n % 2 == 1 || n != 6 && n < 12 && n !=8){
           return -1;
       }
       else if( n == 6 || n == 8){
           return 1;
           
       }
       
       int eigth = n % 8;
       int six = n % 6;
       if(eigth == 0){
           counter = n / 8;
       }
       else if(eigth != 0){
           int num=n;
           while ((num%8) != 0)
           {
               num = num - 8;
               if ((n-num)% 6 == 0)
               {
                   break;
               }
               
           }
           counter = (num/8) + (n-num)/6;
           
       }
       if(six == 0){
           counter2 = n / 6;
       }else if(six != 0){
           counter2 = (n/6) + (six/8);
       }
       if (counter > counter2)
       {
           return counter2;
       }
       else{
           return counter;
       }
       
    }
  
};

