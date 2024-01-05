#include <vector>
using namespace std;
int XX_MARKER_XX;

class Inchworm
{
  public:
 
  int lunchtime(int branch, int rest, int leaf)
  {
    int counter = 0;
  	//create branch initialised to 0
  	//add leaf elements with value 1
    vector <int> branch_vec;

  	for (int i = 0; i < branch+1; i++)
  	{
  		if (i%leaf == 0)
      {
        branch_vec.push_back(1);
      }
      else
      {
        branch_vec.push_back(0);
      }
  	}

  	//check if there is a leaf at rest
  	for (int j = 0; j < branch+1; j=j+rest)
  	{
  		if (branch_vec.at(j)==1)
  		{
  			counter++;
  		}
  	}

    return counter;  
  }
};