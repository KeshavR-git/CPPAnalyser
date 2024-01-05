#include <cmath>
#include <iostream>
using namespace std;
int XX_MARKER_XX;

class Inchworm {
private:
	// recursive way to find the greatest common divisor
	int gcd (int a, int b){
		if(b == 0){
			return a;
		}
		return gcd(b,a%b);
	}
public:
	// function that solves question
	int lunchtime(int branch, int rest, int leaf){
		if(leaf == 0){
			return 1;
		} else if(rest == 0){
			return -1;
		} 
		return int(floor(branch * gcd(leaf,rest) / float(leaf*rest))+1);	//float() for float division. A simplified version of 1 + branch/lcm
	}
};