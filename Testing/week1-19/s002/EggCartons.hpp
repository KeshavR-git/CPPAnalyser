#include <iostream>
#include <cmath>
using namespace std;
int XX_MARKER_XX;

 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    //handle invalid inputs
    if (n<1 || n>100) {
      return -1;
    }
    else if (n % 2 != 0) {
      return -1; //we know any odd number will return -1
    }
    int num_remaining=0;
    int num_8s=0;
    int num_6s=0;
    bool run = 1;
    
    //start by maximising 8-cartons, then attempt to fill the remainder with 6s
    num_8s = floor(n/8);
    num_remaining = n - num_8s*8;
    num_6s = floor(num_remaining/6);
    num_remaining = num_remaining - num_6s*6; 


    if (num_remaining == 0 ) {
      return num_8s + num_6s; //ideal case
    }

    //if the ideal case doesnt work, try decrementing the number of 8s and incrementing num_6s
    //stop checking when num_8s < 0
    while (run) {
      
      if (num_8s*8 + num_6s*6 < n) {
        num_6s++;
      }
      if (num_8s*8 + num_6s*6 > n) {
        num_8s--;
      }
      if (num_8s*8 + num_6s*6 == n) {
        return num_8s + num_6s;
      }
      if (num_8s < 0) {
        return -1;
      }
    }

    return -1;

  }
};



/*
int minCartons(int n)
  {
    if (n<1 || n>100) {
      return -1;
    }
    else if (n % 2 != 0) {
      return -1;
    }
    int num_remaining=0;
    int num_8s=0;
    int num_6s=0;
    int method1=-2;
    int method2=-2;

    //method 1
    num_8s = floor(n/8);
    num_remaining = n - num_8s*8;
    //std::cout<<"remaining = "<<num_remaining<<std::endl;
    num_6s = floor(num_remaining/6);
    num_remaining = num_remaining - num_6s*6; 

    if (num_remaining != 0) {
      method1 = -1;
    }
    else {
      method1 = num_6s + num_8s;
    }

      std::cout<<"n is "<<n<<std::endl;
      std::cout<<"num 8s is "<<num_8s<<std::endl;
      std::cout<<"num 6s is "<<num_6s<<std::endl;
      std::cout<<std::endl;

    std::cout<<"method1:"<<std::endl;
    std::cout<<"n is "<<n<<std::endl;
    std::cout<<"num 8s is "<<num_8s<<std::endl;
    std::cout<<"num 6s is "<<num_6s<<std::endl;
    std::cout<<"end num remaining is "<<num_remaining<<std::endl;

    //method 2
    num_8s=0;
    num_6s=0;
    num_remaining=0;
    num_6s = floor(n/6);
    num_remaining = n - num_6s*6;
    //std::cout<<"remaining = "<<num_remaining<<std::endl;
    num_8s = floor(num_remaining/8);
    num_remaining = num_remaining - num_8s*8; 
    if (num_remaining != 0) {
      method2 = -1;
    }
    else {
      method2 = num_6s + num_8s;
    }
    std::cout<<"method2:"<<std::endl;
    std::cout<<"n is "<<n<<std::endl;
    std::cout<<"num 8s is "<<num_8s<<std::endl;
    std::cout<<"num 6s is "<<num_6s<<std::endl;
    std::cout<<"end num remaining is "<<num_remaining<<std::endl;


    if (method1 == -1 && method2==-1) {
      return -1;
    }
    else if (method1 == -1 && method2!=-1) {
      return method2;
    }
    else if (method1 != -1 && method2 ==-1) {
      return method2;
    }
    else if (method1 != -1 && method2 !=-1) {
      if (method1 < method2) {
        return method1;
      }
      else {
        return method2;
      }
    }




    std::cout<<"n is "<<n<<std::endl;
    std::cout<<"num 8s is "<<num_8s<<std::endl;
    std::cout<<"num 6s is "<<num_6s<<std::endl;
    std::cout<<"end num remaining is "<<num_remaining<<std::endl;
    
    

    return -1;

  }
*/