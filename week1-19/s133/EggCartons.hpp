class EggCartons
{
public:
	int minCartons (int n) {
		//cannot to buy exactly n eggs
		if ( (n<6) || (n==10) || (n%2!=0) ) {
			return -1;
		}

		//multiplies of 8, just fit in 8-egg-cartons
		else if ( n%8==0 ){
			return n/8;
		}

		//not multiplies of 8, need some 6-egg-cartons 
		else {
			return n/8+1;
		}
	}
};