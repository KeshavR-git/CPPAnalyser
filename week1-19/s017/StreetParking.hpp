using namespace std; 
 
class StreetParking {
  public:
  int freeParks(string street) {
    int counter = 0;
    for (int i = 0; i < street.length(); i++) {
      if (street[i] == '-') {
        if (i+1 >= street.length()) {
          counter++;
        }
        else if (street[i+1] == '-' || street[i+1] == 'D') {
          if (i+2 >= street.length()) {
            counter++;
          }
          else if (street[i+2] != 'B') {
            counter++;
          }
        } 
      }
      else{
        while(street[i] == 'S') {
          i++;
        }
      }
    }
    return counter;
  }
};