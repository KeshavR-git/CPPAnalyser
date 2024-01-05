#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int count = 0;
    bool array[branch + 1];
    int leafCount = 0;
    int inchPos = 0;

   if (rest > branch)
   {
     return 1;
   }

    for (int i = 0; i < branch + 1; ++i)
    {
    	if (i == 0)
    	{
    		array[i] = true;
    	} else if (leafCount == leaf) {
    		array[i] = true;
    		leafCount = 0;
    	} else {
    		array[i] = false;
    		
    	}
    	leafCount = leafCount + 1;
    }


    for (int i = 0; i < branch + 1; ++i)
    {

    	if (i == inchPos)
    	{

    		if (array[i] == true)
    		{
    			count = count + 1;


     		}    

     		inchPos = inchPos + rest;

     		if (inchPos > branch + 1 - 1)
     		{
     			inchPos = branch + 1 - 1;
     		}	
    	}
    }

     for (int i = 0; i < branch + 1; ++i)
    {
     // std::cout << array[i] << ' ';
    }
  // std::cout << std::endl;

    return count;
  }
};