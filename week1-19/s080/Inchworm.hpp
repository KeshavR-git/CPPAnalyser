using namespace std;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
	int inchWormTravelled=0; //Inches travelled along Branch. 
	int res=1; //Initialize to 1. Inchworm always eats the first leaf. 
	inchWormTravelled=inchWormTravelled+rest; //Travels to first rest point. 

	while(inchWormTravelled<=branch) //While it's still travelling
	{
		if(inchWormTravelled%leaf==0)
		{
			res++;
		}
		inchWormTravelled=inchWormTravelled+rest; //Travels to rest point. 
	}    		
		
	return res;  // return your result
  }
};
