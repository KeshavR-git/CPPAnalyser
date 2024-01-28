#ifndef THROWTHEBALL_HPP
#define THROWTHEBALL_HPP

class ThrowTheBall{
public:
	//greatest common divisor
	int gcd(int a, int b){ 
		if (a == 0) 
			return b;  
    	return gcd(b % a, a);  
   } 
    //lowest common multiple
	int lcm(int a, int b){  
    	return (a*b)/gcd(a, b);  
    }

    int timesThrown(int N, int M, int L){
    	int result=(M-1)*(lcm(L,N)/L);
    	return result;
    }  
};
#endif