using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
	int res = 0;
	

	for (int i = 0; i <=  branch; i++){
		
		if( i % leaf == 0 && i % rest == 0){
			res++;
		}
	}    
    return res;  
  }
};