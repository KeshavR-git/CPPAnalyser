#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
int XX_MARKER_XX;
// Attempt at DownloadingFiles problem

//A1720286, T Galindo


/* CLASS DEF
*/

vector<string> string_splitter ( vector<string> input )
{
  int input_length = input.size();
  vector<string> split_string_vector;
  for ( int i = 0; i < input_length; i++ )
  {
    int space_index = 0;
    while ( input.at( i )[space_index] != 32 ) space_index++;
    split_string_vector.push_back( input.at( i ).substr( 0, space_index ) );
    split_string_vector.push_back( input.at( i ).substr( space_index + 1, input.at( i ).size() - space_index) );
  }
  return split_string_vector;
}

void print_vector ( vector<string> input )
{
  for ( int i = 0; i < input.size(); i++ ) cout << "  " << i << ": " << input.at( i ) << endl;
}

class DownloadingFiles
{
public:
  double actualTime(vector<string>);
};

/* IMPLEMENTATION
*/

double DownloadingFiles::actualTime(vector<string> tasks)
{

  int input_length = tasks.size();

  vector<string> speed_time = string_splitter( tasks );
  // print_vector( speed_time );

  double total_KBs   = 0;
  double total_KB    = 0;

  //CALC - total time and total KB's
  for( int i = 0; i < speed_time.size(); i += 2 )
  {
    total_KB   += stoi( speed_time[i] ) * stoi( speed_time[i+1] );
    total_KBs  += stoi( speed_time[i] );
    // cout << "total_KB  : " << total_KB << endl;
    // cout << "total_KBs : " << total_KBs << endl;
    // cout << "i         : " << i << "\n" << endl;
  }

  double ans = ( total_KB / total_KBs );
  cout << fixed;
  // cout << fixed << setprecision(2);
  return ans;
}

