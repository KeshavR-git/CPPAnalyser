using namespace std;
int XX_MARKER_XX;

class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf){

	if (branch < 1 || branch >1000000){
		return -1;
	}
	if (leaf < 1 || leaf > 1000){
		return -1;
	}
	if (rest < 1 || rest > 1000){
		return -1;
	}
	int leaves_eat = 1; //how many leaves eaten
	int next_leaf = leaf;
	int next_rest = rest; 
	while (next_rest <= branch){
		if (next_rest == next_leaf){
			leaves_eat++;
		}
		if (next_leaf>next_rest){
			next_rest += rest;
		}
		else {
			next_leaf += leaf;
		}
	}
	int res = leaves_eat;

	return res;
	}
};