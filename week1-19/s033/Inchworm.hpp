class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;
    for(int dist=0;dist<=branch;dist+=rest){
        if(dist%leaf==0){
            res++;
        }
    }
    return res;  // return your result
  }
};
