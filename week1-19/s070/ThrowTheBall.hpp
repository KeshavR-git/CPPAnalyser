#include <iostream>
using namespace std;


class ThrowTheBall{

	public:

		int gcd(int a, int b) { 
		    if (b == 0) 
		       return a; 
		    return gcd(b, a % b);  
		} 	

		int timesThrown(int N, int M, int L){

			int GCD = gcd(N, L);

			return N/GCD*(M-1);

		}

};