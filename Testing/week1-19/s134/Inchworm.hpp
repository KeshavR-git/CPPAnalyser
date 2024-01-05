int XX_MARKER_XX;
#ifndef INCHWORM_HPP
#define INCHWORM_HPP

class Inchworm{
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
    
    int lunchtime(int branch, int rest, int leaf){
    	int result=branch/lcm(rest,leaf)+1;
    	return result;
    }

};
#endif
