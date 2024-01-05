#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std; 
int XX_MARKER_XX;

class AzimuthMonitoring
{

  public: 
  int getAzimuth(vector<string> instruction)
  {
     // your code for the problem.
    int length=instruction.size();
    int degree=0;
    vector<string> temple;
    string s="";  

    //sum the array elements
    for(int i=0; i<length;i++){
        //split the string element with ' ' into a vector
        for(int j=0;j<instruction[i].size();j++){
            if(instruction[i][j]==' '){
                temple.push_back(s);
          //      cout<<"s"<<s<<endl;
                s="";               
            } else{
                string c(1,instruction[i][j]);
                s.append(c);
                if(j==instruction[i].size()-1){
                    temple.push_back(s);
                    s="";
                }         
            }
        }

     //   cout<<temple[0]<<endl;
        

        if(temple[0]=="LEFT"){
            if(temple.size()==1){
                degree=(degree+270)%360;
            }
            else{
                degree=(degree+360-stoi(temple[1]))%360;
            }

        }else if(temple[0]=="RIGHT"){

            if(temple.size()==1){
                degree=(degree+90)%360;
            }
            else{
                degree=(degree+stoi(temple[1]))%360;
            }
       
        }else if(temple[0]=="TURN"){
           // cout <<"T" <<degree<< endl;
            degree=(degree+180)%360;
      
        }else if(temple[0]=="HALT"){
            return degree;
        }


        temple.clear();
    }
 
    
    return degree;  // return your result
  }
};

