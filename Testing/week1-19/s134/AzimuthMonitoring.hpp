#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int XX_MARKER_XX;
#ifndef AZIMUTHMONITORING_HPP
#define AZIMUTHMONITORING_HPP

class AzimuthMonitoring{
public:
	int getAzimuth(vector<string> instructions){
		int degree=0;
		for(int i=0; i<instructions.size(); i++){
			if(instructions[i]=="LEFT"){
				degree=degree-90;
				if(degree<0){
					degree=360+degree;
				}
				else if(degree>=360){
					degree=degree-360;
				}

			}
			else if(instructions[i]=="RIGHT"){
				degree=degree+90;

				if(degree<0){
					degree=360+degree;
				}
				else if(degree>=360){
					degree=degree-360;
				}
			}
			else if(instructions[i]=="TURN AROUND"){
				degree=degree+180;

				if(degree<0){
					degree=360+degree;
				}
				else if(degree>=360){
					degree=degree-360;
				}
			}
			else if(instructions[i]=="HALT"){
				if(degree<0){
					degree=360+degree;
				}
				else if(degree>=360){
					degree=degree-360;
				}
				break;
			}
			else{
				 stringstream ss;     
  
   				 /* Storing the whole string into string stream */
    			ss << instructions[i]; 
  
    			/* Running loop till the end of the stream */
    			string temp; 
    			int found; 
    			while (!ss.eof()) { 
  
       				 /* extracting word by word from stream */
        			ss >> temp; 
  
        			/* Checking the given word is integer or not */
        			stringstream(temp) >> found;
    			} 
				if(instructions[i][0]=='L'){
					degree=degree-found;

					if(degree<0){
						degree=360+degree;
					}
					else if(degree>=360){
						degree=degree-360;
					}
					ss.clear();					
				}
				if(instructions[i][0]=='R'){
					degree=degree+found;

					if(degree<0){
						degree=360+degree;
					}
					else if(degree>=360){
						degree=degree-360;
					}
					ss.clear();					
				}
			}
		}
		
		return degree;
	}
};
#endif