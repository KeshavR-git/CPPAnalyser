#ifndef EggCartons_hpp
#define EggCartons_hpp

class EggCartons{

	public:
		int minCartons(int n){
			int numCartons = 0;
			int eights = 1;
			int sixes = 0;
			//cannot buy an odd number of eggs or les than 6 eggs, so check that first.
			if (n%2 != 0 || n < 6){
				return -1;
			} else {
				while (8*eights < n){
					eights++;
				}
				while ((8*eights + 6*sixes) != n){
					eights--;
					sixes++;
				}
				if (sixes < 0 || eights < 0){
					return -1;
				}
			}
			numCartons = eights + sixes;
			return numCartons;
		}
};
#endif