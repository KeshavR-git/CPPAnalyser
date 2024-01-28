using namespace std;

 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int recent_leaf = leaf;
    int total_consume = 1;

    while( recent_leaf <= branch )
    {
    	if ( recent_leaf%rest == 0 )
    	{
    		total_consume++;
    	}
    	recent_leaf+=leaf;
    }
    return total_consume;  // return your result
  }
};
