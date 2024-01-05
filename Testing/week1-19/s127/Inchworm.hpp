using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
	if ( (branch < 1) || (branch > 1000000))
	{
		return -1;
	}
	if ( (rest < 1) || (rest > 1000))
	{
		return -1;
	}
	if ( (leaf < 1) || (leaf > 1000))
	{
		return -1;
	}

	int leaf_spot = 0; //Current leaf spot
	int worm_pos = 0; //Worm's spot
	int res = 0;

	while(worm_pos <= branch)
	{
	// std::cout << "Leaf spot is " << leaf_spot << ". Worm is " << worm_pos << std::endl;
		if (worm_pos == leaf_spot)
		{
			res++;
		}
		if (worm_pos >= leaf_spot)
		{
			leaf_spot = leaf_spot + leaf;
		}
		else
		{
			worm_pos = worm_pos + rest; //Increment worm's spot
		}
	}
    return res;  // return your result
  }
};
