#include <iostream>
#include <string>
//using namespace std;



class StreetParking
{
  public:
  int freeParks(std::String street)
  {
          // string str ("--S--S--S--S--");
           std::string Dw ("D");
           std::string Bs ("B");
           std::string Ss ("S");
           std::string St ("-");

           int res = std::street.size();

           for(string::size_type i = 0; i < street.size(); i++) {

               if(std::street.compare(i,1,Dw) == 0){
                   //cout << "Driveway found at: " << i+1 << '\n';
                   res--;
               }

              if(std::street.compare(i,1,Bs) == 0){
                   //cout << "Bus Stop found at: " << i+1 << '\n';
                   res--;
                   //find 5 and 10 before
                   if(std::street.compare(i-1,1,St) == 0){
                       res--;
                   }
                   if(std::street.compare(i-2,1,St) == 0){
                       res--;
                   }
               }


               if(std::street.compare(i,1,Ss) == 0){
                   //cout << "Side St found at: " << i+1 << '\n';
                   res--;
                   //find 5 before and 5 after
                   if(std::street.compare(i+1,1,St) == 0){
                       res--;
                   }
                   if(std::street.compare(i-1,1,St) == 0){
                       res--;
                   }
               }
           }
           //cout << "end = "<< res<< endl;
           return res;
        }
};
