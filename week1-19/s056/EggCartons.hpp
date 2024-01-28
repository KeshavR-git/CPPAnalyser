#include <algorithm>

class EggCartons {
public:  
	int minCartons(int n) {
		if(n % 2 == 1 || n < 6)
			return -1;
		else if(n == 6 || n == 8)
			return 1;
		else{
			int b6 = minCartons(n - 6);
			int b8 = minCartons(n - 8);
			if(b6 != -1 && b8 != -1)
				return std::min(b6, b8) + 1;
			else if(b6 == -1 && b8 != -1)
				return b8 + 1;
			else if(b6 != -1 && b8 == -1)
				return b6 + 1;
			else
				return -1;
		}	
	}
};
