using namespace std;
int XX_MARKER_XX;

 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    // your code for the problem
    int array[N];
    for (int i = 0; i < N; ++i)
    {
      if ( i == 0 )
      {
        array[i] = 1;
      }else{
        array[i] = 0;
      }
    }

    int times = 0;
    int current_player = 1;
    int next_player = 0;
    int current_player_held = 1;

    while( current_player_held < M )
    {
      current_player_held = array[current_player-1];
      if ( current_player_held%2 == 0 )
      {
        next_player = current_player + L;
      }else{
        next_player = current_player - L;
      }

      if ( next_player > N )
      {
        next_player = next_player - N;
      }else if( next_player < 1 ){
        next_player = next_player + N;
      }

      array[next_player-1]++;
      current_player = next_player;
      cout<<current_player<<endl;
      current_player_held = array[current_player-1];
      times++;
    }

    return times;  // return your result
  }
};
