using namespace std;
 
 
class EggCartons
{
  public:
  int minCartons(int n){
    int impossible = -1;
    int carton8 = 0;
    int carton6 = 0;
    int remainder;
    int sum;
    {
      if ( n % 2 == 0) {                     // Find if n is odd, if so impossible
        carton8 = n / 8;                     // Find maximum amount of 8 egg cartons
        remainder = n % 8;
        while (remainder % 6 != 0)           // give away an 8 egg carton if remainder is not divisible by 6
          {
            if (carton8 <= 0)
            {
              return impossible;
            } else {
              carton8--;
              remainder = remainder + 8;
            }
          }
      carton6 = remainder / 6;
      } else {
        return impossible;
      }
      sum = carton8 + carton6;
      return sum;                               // return your result
    }
  }
};