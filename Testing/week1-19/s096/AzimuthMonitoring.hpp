#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int XX_MARKER_XX;

 class 	AzimuthMonitoring{
 // public:
 // 	string a;
 // 	int b;
 // 	istringstream iss;
 // 		int getAzimuth(vector<string> instructions){
 // 			int degree =0;
 // 			for(int i=0; i< instructions.size();i++){
 // 				if(instructions[i]=="LEFT"){
 // 					degree=degree+90;
 // 					if(degree>360){
 // 						degree=degree-360;
 // 					}
 // 					if(degree==360){
 // 						degree=0;
 // 					}
 // 				}
 // 				else if(instructions[i]=="RIGHT"){
 // 					degree=degree-90;
 // 					if(degree<0){
 // 						degree=0-degree;
 // 					}
 // 					if(degree==360){
 // 						degree=0;
 // 					}
 // 				}
 // 				else if(instructions[i]=="TURN AROUND"){
 // 					degree=degree+180;
 // 					if(degree>360){
 // 						degree=degree-360;
 // 					}
 // 					if(degree<360){
 // 						degree=360-degree;
 // 					}
 // 					if(degree==360){
 // 						degree=0;
 // 					}
 // 				}
 // 				else if(instructions[i]=="HALT"){
 // 					i=instructions.size()-1;
 // 				}
 // 				 else{
 // 					iss.str(instructions[i]);
 // 					iss>>a; iss>>b;
 // 					if(a=="LEFT"){
 // 						degree=degree+b;
 // 						if(degree>360){
 // 							degree=degree-360;
 // 						}
 // 						if(degree==360){
 // 							degree=0;
 // 						}
 // 					}
 // 					if(a=="RIGHT"){
 // 						degree=degree-b;
 // 						if(degree<0){
 // 							degree=0-degree;
 // 						}
 // 						if(degree==360){
 // 							degree=0;
 // 						}
 // 					}
 // 				}
 // 			}
 // 			return degree;	
 // 		}
 // };

 public:
 	string a;
 	int b;
 	istringstream iss;
 		int getAzimuth(vector<string> instructions){
 			int degree =0;
 			for(int i=0; i< instructions.size();i++){
 				if(instructions[i]=="LEFT"){
 					degree=degree-90;
 					
 				}
 				else if(instructions[i]=="RIGHT"){
 					degree=degree+90;
 				}
 				else if(instructions[i]=="TURN AROUND"){
 					degree=degree+180;

 				}
 				else if(instructions[i]=="HALT"){
 					i=instructions.size()-1;
 				}
 				 else{
 					iss.str(instructions[i]);
 					iss>>a; iss>>b;
 					if(a=="LEFT"){
 						degree=degree-b;
 					}
 					if(a=="RIGHT"){
 						degree=degree+b;
 					}
 					iss.str(" ");
 					iss.clear();
 				}
 			}
 			degree= (degree+36000)%360;
 			return degree;	
 		}
 };

