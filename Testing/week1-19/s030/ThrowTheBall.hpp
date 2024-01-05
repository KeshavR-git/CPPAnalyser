#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
      vector<int> caught;
      int res = 0;

      caught.assign(N, 0);

           int head = 0;

           if(M==1){return res;} //no passes

           while(caught[head]<=M){

               caught[head]=caught[head]+1;

               //cout<<head<< " player = caught "<< caught[head]<< endl;

               res++;

               if(caught[head]==M){return res-1;}

               if(caught[head]%2==0){
                   //left pass (even)
                //cout << "even" << endl;
                   head = head-L;
               }else{
                   //right pass (odd)
                  //cout << head<<"odd" << endl;
                   head = head+L;
               }

               //check if within range
               while(head>=N){
                   head = head-N;
               }


               while(head<0){
                //cout << "less than 0" << endl;
                   head = head+N;
               }
           }
         }
};
