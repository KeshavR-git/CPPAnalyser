#include <iostream>
using namespace std;



class EggCartons
{
  public:
    int minCartons(int n)
    {
          int res = 1;
        //  int n = 100;
          int count = 0;
          int array8[12] = {8,16,24,32,40,48,56,64,72,80,88,96};
          int array6[16] = {6,12,18,24,30,36,42,48,54,60,66,72,78,84,90,96};

            if(n%2==1){
              return -1;
            }

            if(n<6){
              return -1;
            }

            if(n%8==0){
              return n/8;
            }

            if(n== 6||12||18||24||36||42||54||60||66||72||84||90){
              return n/6;
            }

            for(int i=0; i<=16; ++i){
              for(int j=11; j>=0; --j)
              {
                if(array8[j]+array6[i]==n){
                  res = array8[j]/8 + array6[i]/6;
                  return res;
                }
                i++;
              }


            }
            return -1;
    }
  };
