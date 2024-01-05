#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <iterator> 
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  // 11 , 2 , 4
  { 
    vector<int> restVect; 
    vector<int> leafVect; 
    int tempLeaf = leaf;
    int tempRest = rest; 
    int counter = 1;  
    //the ceiling is the leaf
    for(int i=0;i<1000000;i++)
    {
      if(tempLeaf<=branch)
      {
        restVect.push_back(tempLeaf); 
      }
      if(tempRest<=branch )
      {
        leafVect.push_back(tempRest); 
      }
      tempLeaf= tempLeaf+leaf; 
      tempRest = tempRest+rest; 
     // std::cout<<"Length: "<<leafVect.size()<<std::endl; 
    }

    //std::sort(restVect.begin(),restVect.end()); 
    //std::sort(leafVect.begin(),leafVect.end()); 
    std::vector<int> v_intersection; 

    std::set_intersection(restVect.begin(),restVect.end(),leafVect.begin(),leafVect.end(),std::back_inserter(v_intersection)); 

    //std::cout<<"TOTAL: " <<v_intersection.size()+1 <<std::endl; 

    counter += v_intersection.size(); 
    /* if(branch%rest==0)
    {
      counter= counter +1; 
    }*/ 
      



      

       /* std::cout<< "Leaf: "; 
        for(int i=0;i<leafVect.size();i++)
      {
        std::cout<<leafVect[i]<<" "; 
      } 
      std::cout<< "Ends"<<std::endl;*/ 
   return counter; 

  }
};

/* 
    int counter=1; 
    int temp; 
    int restCount=0; //0
    restCount = rest; 
    int tempLeaf=0; //0
    tempLeaf= leaf; 
    temp = branch/rest; //5  
    for(int i=1;i<temp+1;i++)
    {
      std::cout<<"Rest: "<<restCount<<std::endl; 
      std::cout<<"Lead: "<<tempLeaf<<std::endl; 
      if((restCount)==tempLeaf) //2 4
      {
        counter++; 
      }
      restCount = restCount+rest;  //4
      tempLeaf = tempLeaf+leaf; //4+4
      //std::cout<<tempLeaf<<std::endl; 
    }
    return counter;  // return your result
    */ 