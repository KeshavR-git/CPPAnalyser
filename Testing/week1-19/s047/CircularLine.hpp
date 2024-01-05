#include <vector>
using namespace std;
int XX_MARKER_XX;


class CircularLine
{
  public:

  int longestTravel(vector<int> t)
  { 
    int size = t.size();
    int max_distance = 0;

    for (int i = 0; i < size; ++i)
    {
      max_distance += t[i];
    }

    int currentbest = -1;
    int count = 1;
    int buffer = 0;
    int count2 = 0;
    int count3 = 0;

    while(count <= (size/2) )
    {
      count2 = 0;
      count3 = 0;
      for (int i = 0; i < size; ++i)
      {
        buffer = 0;
        count2 = count3;

        for (int j = 0; j < count; ++j)
        {
          buffer += t[count2];
          count2++;

          if (count2 >= size)
          {
            count2 -= size;
          }
        }
        
        count3++;

        if ((max_distance - buffer) <= (max_distance / 2))
        {
          buffer = max_distance - buffer;
        }

        if (buffer > currentbest)
        {
          currentbest = buffer;
        }
      }

      count++;
    }

    return currentbest;




  }

};