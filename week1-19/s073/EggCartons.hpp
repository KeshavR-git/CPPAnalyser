using namespace std;

 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    // your code for the problem
    int max_8 = n/8;

    for (int i = max_8; i >= 0 ; i--)
    {
      /* code */
      int left = n - 8*i;

      if ( left%6 == 0 )
      {
        /* code */
        return i+left/6;
      }
    }
    return -1;  // return your result
  }
};
