using namespace std;
int XX_MARKER_XX;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	//error checking
  	if(branch < 1 || branch > 1000000 || rest < 1 || rest > 1000 || leaf < 1 || leaf > 1000){

  	}

  	int restCounter = rest;
  	int res = 1;

  	while(restCounter <= branch){
  		if(restCounter % leaf == 0){
  			res++;
  		}
  		restCounter+=rest;
  	}
    return res;  // return your result
  }
};