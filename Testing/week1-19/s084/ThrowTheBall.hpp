#include <iostream> 
#include <vector> 
using namespace std; 
int XX_MARKER_XX;


class ThrowTheBall
{
public: 
int timesThrown(int N, int M, int L)
{
    //std::string b[(2*N)]; 
    std::vector<string> b; 

    std::string a[N]; 
    std::vector<int> store; 
    std::vector<string> storeTotal;

    //Getting the circular arrays 
    int doubleTheSize= (2*N); 
    int tempM = N*N; 

  /*   a[0] = '1'; 
    a[1] = '2'; 
    a[2] = '3'; 
    a[3] = '4'; 
    a[4] = '5'; */ 
    int intial = 1; 
    int counter = 0; 
    int total = 0; 
    int flip = 0; 
    for(int i=0; i<N; i++)
    {
        a[i] = to_string(intial); 
        b.push_back(a[i]); 
        store.push_back(0); 
        intial ++; 
    }

     for(int i=0;i<10000;i++)
    {
        if(counter>=N)
        {
            counter=0; 
        }

        //a[i]= '0'+i; 
        //b[i] = b[N+i] = b[doubleTheSize+i]= b[tempM+i] = a[i]; 
        b.push_back(a[counter]);

        if(b[i]==a[counter])
        {
            store.at(counter)= store.at(counter)+1; 

        }
        counter++;  

    }

    //just testing to see if it works 
  /*    for(int i=0;i<tempM;i=i+3)
    {
        std::cout<< b[i] << " "; 
         if(stoi(b[i])==1)
        {
            i= i-3; 
        }*/ 

   /*  int i=0; 
    int tempFlip = 0; 
    while(flip<10)
    {
        std::cout<< b[i] << " "; 
        if(store[i]%2==0)
        {
            i= i+L+1; 
            store[tempFlip] =stoi(b[i]); 
           // std::cout<<"FLIP: "<< b[i]<< " " << flip<< " ";
          // i= i-3; 
          flip++; 

        }
        else
        {
            i= ((i-L)%N+N)%N; 
        }
        tempFlip++; 

        
    }

    for(int i=0;i<5;i++)
    {
        std::cout<<"STORE: "<<store[i]<<std::endl; 
    }*/ 

    vector<int> line; 
    int temp; 
    for(int i=0;i<N;i++)
    {
        line.push_back(0); 
    }
    int i=0;
    line[i]= line[i]+1; 

    while(line[i]<M)
    {
        total++; 
        if(line[i]%2==0)
        {
            i= (i+L)%N; 
        }
        else 
        {
            temp =i-L; 
            i = (temp%N+N)%N; 
        }
        line[i]++; 
    }

    return total; 




}
}; 