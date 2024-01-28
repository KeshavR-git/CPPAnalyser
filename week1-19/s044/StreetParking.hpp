#include <string>
using namespace std;
 
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
  	bool freeArray[street.length()];						   // Initialize Variables
  	int res = 0;
    int step = 0;
    while (step <= street.length()-1){               // Initialize Array
      freeArray[step] = true;
      step++;
    }


    step = 0;
    while (step <= street.length()-1) {						   // While loop to walk the string
    	switch (street[step])
      {
        case 'D' :
          freeArray[step] = false;               // Classifies 'D' as an Unavailable space
          break;
        case 'S' :                               // Classifies 'S' as an Unavailable space and the single spaces around it
          freeArray[step] = false;               // Checks to make sure it is not classifing a non existent part of the array
          if (step >= 1) {
            freeArray[step - 1] = false;
          }
          if (street.length() - step >= 1) {
            freeArray[step + 1] = false;
          }
          break;
        case 'B' :                                // Classifies 'B' as an Unavailable space and the single spaces around it
          freeArray[step] = false;                // Checks to make sure it is not classifing a non existent part of the array
          if (step >= 1) {
            freeArray[step - 1] = false;
          }
          if (step >= 2) {
            freeArray[step - 2] = false;
          }
          break;
      }	
      step++;
    }
    step = 0;
    while (step <= street.length()-1) {               // While loop to add up number of free spaces
      if (freeArray[step] == true) {
        res++;
      }
      step++;
    }
    return res;                                   // return result
  }
};
