//#include
using namespace std;
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    int cartons = 0;
    if (n < 6){
    	return -1;
    }
   	if (n % 2 != 0){
    	return -1;
    }
    while(n > 7){
    	if(n % 8 == 0){
    		n-= 8;
    		cartons++;
    	}
    	else if(n % 6 == 0){
    		n-=6;
    		cartons++;
    	}
    	else{
    		n-=8;
    		cartons++;
    	}
    }
    if(n == 6){
    	n-=6;
    	cartons++;
    }
    if(n == 8){
    	n-=8;
    	cartons++;
    }

    if (n == 0){
    	return cartons;
    }
    else{
    	return -1;
    }
  }
};