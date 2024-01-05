int XX_MARKER_XX;
class Inchworm {
	int gcd(int a, int b) { 
	   if (b == 0) 
	      return a; 
	   return gcd(b, a % b);  
	} 

	int lcm(int a, int b){
		return (a / gcd(a,b)) * b;
	}

public:

	int lunchtime(int branch, int rest, int leaf){
		int distToNextLeaf = lcm(leaf, rest);
		return ((branch)/distToNextLeaf) + 1;
	}

};