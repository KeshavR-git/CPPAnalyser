using namespace std;
 
 
class Inchworm{

  public:

  int lunchtime(int branch, int rest, int leaf){
    // your code for the problem
    int res = 0;
    int pos = 0;

  	while(pos <= branch){

  		if((pos % leaf) == 0){
  			res++;
  		}
  		pos += rest;

  	}

    return res;  // return your result
  }

};