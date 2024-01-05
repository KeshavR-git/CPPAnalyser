#include "math.h"
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
  	int pass_count = 0;
    std::vector <pair <int, int>> players;
    for (int i = 0; i < N; ++i)
    {
      players.push_back(make_pair(i+1, 0));
    }

    int iterator = 0;
    int temp;

    players[0].second = 0;

    if (M == 1)
    {
      return 0;
    }

    while(players[iterator].second != M-1)
    {
      players[iterator].second += 1;
      //cout << "  player: " << iterator + 1 << " passcount: " << players[iterator].second << endl;

      if (players[iterator].second % 2 == 0)
      {
        if ((iterator+1) + L > N)
        {
          temp = abs(N - ((iterator + 1) + L));
        }
        else 
        {
          temp = (iterator+1) + L;
        }
        
      }
      else if(players[iterator].second % 2 != 0)
      {
        if((iterator+1) - L > 0)
        {
          temp = (iterator+1) - L;
        }
        else
        {
          temp = abs(N + ((iterator + 1) - L));
        }
        
      }

      pass_count++;
      //cout << "  total pass count: " << pass_count << " iterator: " << temp << endl;
      iterator = temp - 1;
    }
    return pass_count;
  }
};