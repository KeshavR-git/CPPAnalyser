using namespace std;

class EggCartons {
public:
	int minCartons(int n) {
		// only 'potentially' solvable if even and at least 6 eggs
		if( (n >= 6) || (n % 2 == 0) ) {
			int a = 0;		// no. 8-egg cartons
			int b = 0;		// no. 6-egg cartons
			int c;			// total no. cartons
			int r;			// eggs remaining to be bought
			
			// get as many 8-packs as possible
			a = n / 8;
			r = n % 8;

			// for as long as we have some cartons of 8...
			for(int i = a; i>= 0; i--) {
				// if remaining eggs to be bought is divisble by 6, get that many 6-packs & return total cartons bought
				if(r % 6 == 0) {
					b = r / 6;

					c = a + b;
					return c;
				}
				// else, try again by buying 1 less 8-pack
				else {
					r += 8;
					a--;
				}
			}
		}

		// if n isn't solvable for, return -1
			return -1;
	}
};