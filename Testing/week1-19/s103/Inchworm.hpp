#include <iostream>
int XX_MARKER_XX;

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
	  int numEat = 0;
	  int currPos = 0;

	  for (int i = 0; i <= branch; i++)
	  {
		  if (currPos % leaf == 0 && currPos % rest == 0)
		  {
			  numEat++;
		  }
		  currPos++;
	  }

	  return numEat;    
  }
};