#include <iostream>
#include <string>
using namespace std;


class StreetParking
{
  public:
    int freeParks(string street)
    {
      int len = street.length();          // number of 5-meter sections
      int streetMapping[len];             // mapping of the free spots
      // initialise all spots to free
      for ( int i=0; i<len; i++ ){
        streetMapping[i] = 1;
      }
      // sets the non-free spots to 0
      for ( int i=0; i<len; i++ )
      {
        // for a driveaway
        if ( street[i] == 'D' ){
          streetMapping[i] = 0;
        }
        // for a bus stop
        else if ( street[i] == 'B' ){
          streetMapping[i] = 0;
          // out of bound conditionals
          if ( i-1 >= 0 ) {
            streetMapping[i-1] = 0;
          }
          if ( i-2 >= 0 ) {
            streetMapping[i-2] = 0;
          }
        }
        // for a side street
        else if ( street[i] == 'S' ){
          streetMapping[i] = 0;
          // out of bound conditionals
          if ( i-1 >= 0 ) {
            streetMapping[i-1] = 0;
          }
          if ( i+1 < len ) {
            streetMapping[i+1] = 0;
          }
        }
      }
      // calculates and returns the number of free spots
      int freeSpots = 0;
      for ( int i=0; i<len; i++ ){
        if ( streetMapping[i] == 1 )
          freeSpots++;
      }
      return freeSpots;
    }
};
