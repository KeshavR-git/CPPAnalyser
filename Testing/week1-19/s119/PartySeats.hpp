#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;
/*
  Party seats

  Tom Galindo
  A 1720 286
*/


/* CONSTRAINTS

  Need even list
  Need equal girls and boys

*/

bool is_boi ( string input )
{
  int inc = 0;
  while ( input[inc] != 32 ) inc++;
  if ( input[inc + 1] == 'b' ) return true;
  else return false;
}

void print_vector_ ( vector<string> input )
{
  for ( int i = 0; i < input.size(); i++ ) cout << input.at(i) << endl;
}

class PartySeats
{
public:
  vector<string> seating(vector<string>);
};

vector<string> PartySeats::seating(vector<string> attendees)
{
  //INIT - vector to return if no possible legal config
  vector<string> void_vector;

  //CATCH - odd number of attendees
  if ( attendees.size() % 2 == 1 ) return void_vector;

  //CATCH - number of attendees is multiple of four
  if ( attendees.size() % 4 != 0 ) return void_vector;

  //SORT - alphabetically
  sort ( attendees.begin(), attendees.end() );

  //INIT - return vector
  vector<string> return_vector;
  return_vector.assign ( attendees.size() + 2, "" );

  return_vector.at ( 0 )                        = "HOST";
  return_vector.at ( return_vector.size() / 2 ) = "HOSTESS";

  //SPLIT - attendees into girls and boys
  vector<string> boys;
  vector<string> girl;

  //CATCH - # boys == girls

  if ( boys.size() != girl.size() ) return void_vector;

  for ( int i = 0; i < attendees.size(); i++ )
  {
    if ( is_boi ( attendees.at ( i ) ) )
    {
      int inc = 0;
      while ( attendees.at ( i )[inc] != 32 ) inc++;
      attendees.at ( i ).resize ( inc );
      boys.push_back ( attendees.at ( i ) );
    }
    else
    {
      int inc = 0;
      while ( attendees.at ( i )[inc] != 32 ) inc++;
      attendees.at ( i ).resize ( inc );
      girl.push_back ( attendees.at ( i ) );
    }
  }


    // print_vector_ ( boys ) ;
    // print_vector_ ( girl ) ;

  //CATCH - Too many boys/girls
  if ( boys.size() != girl.size() ) return void_vector;

  //FINISH - construct return_vector
  int j = 0;
  for ( int i = 0; i < attendees.size()/2; i++ )
  {
    if ( i % 2 == 1 ) { return_vector.at ( i + 1 ) = boys.at ( j ); j++; }
    else {              return_vector.at ( i + 1 ) = girl.at ( j ); }
  }
  for ( int i = attendees.size()/2 + 1; i < attendees.size() + 1; i++ )
  {
    if ( i % 2 == 1 ) { return_vector.at ( i + 1 ) = boys.at ( j ); }
    else {              return_vector.at ( i + 1 ) = girl.at ( j ); j++; }
  }
  return return_vector;
}
