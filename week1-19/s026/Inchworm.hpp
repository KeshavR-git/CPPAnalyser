using namespace std;

 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {	
    int res=0;
    int leaves=0;
    int rests=0;
    for(int i=0;i<branch;i=leaves) {
      if (rests==leaves) {
          res=res+1;
      }
      while(rests<leaves) {
        rests=rests+rest;
        if (rests==leaves) {
          res=res+1;
        }
      }
      leaves=leaves+leaf; 
      if (rests==leaves) {
          res=res+1;
      }
    }
    return res; 
  }
};