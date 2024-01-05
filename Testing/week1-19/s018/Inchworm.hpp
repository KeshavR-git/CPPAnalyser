using namespace std;
int XX_MARKER_XX;

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int distance_travelled = 0;
    int res = 0;
    while (distance_travelled <= branch) // Check if at end of the branch
    {
        if (distance_travelled % leaf == 0) // check if a branch at current point
        {
            res++;
        }
        distance_travelled = distance_travelled + rest; // Update current point
    }
    return res;  // return your result
  }
};
