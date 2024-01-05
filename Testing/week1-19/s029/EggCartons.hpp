using namespace std;
int XX_MARKER_XX;

class EggCartons
{
  public:
  	
  int minCartons(int n)
  {
    if (n<6 || n%2!=0){
    	return -1;
    }
    
    if (n%8==0){
    	return n/8;
    }else{
    	int a=n/8;
    	int b=0;
    	int rest=n-(8*a);
    	while(rest!=0){
    		if(rest<6){
    			if(a==0){
    				return -1;
    			}
    			a=a-1;
    			b=b+1;
    			
    		}
    		
    		if(rest>=6){
    			b=b+1;
    			
    		}
    		rest=n-(8*a)-(6*b);

    	}
    	return a+b;
    }
      // return your result
  }
};
