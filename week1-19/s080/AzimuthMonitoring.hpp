#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include <cstdlib>
using namespace std;

class AzimuthMonitoring
{
	public:
	int getAzimuth(vector<string> instructions)
  	{	
  		int i,dir=0;
  		for(i=0;i<instructions.size();i++)
  		{
  			if(instructions[i].find("RIGHT")==0)
  			{	
  				//Also handles the cases with numbers (using the 'find' command.)
  				int rot=0;
  				//Tokenise and get the number. (I'd likely implement this in a separate function as used twice)
  				vector<string> tok;
  				string element;

  				//Utiling stringstreams to separate the 'words'
  				stringstream ss(instructions[i]);
  				while(ss>>element)
  				{
  					tok.push_back(element);
  				}

  				if(tok.size()>1)
  				{
  					//Convert the string to an int. Store in rot.				
	  				stringstream ss2(tok[1]);
  					ss2>>rot;
  				}
  				else
  				{
  					//Deals with the case without numbers. 
  					rot=90;
  				}
  				
  				//As we are rotating RIGHT, the factor is POSITIVE. Just add. 
  				dir=dir+rot;
  			}
  			else if(instructions[i].find("LEFT")==0)
  			{	
  				//Also handles the cases with numbers (using the 'find' command.)
  				int rot=0;

  				//Tokenise and get the number. (I'd likely implement this in a separate function as used twice)
  				vector<string> tok;
  				string element;

  				//Utiling stringstreams to separate the 'words'
  				stringstream ss(instructions[i]);
  				while(ss>>element)
  				{
  					tok.push_back(element);
  				}

  				if(tok.size()>1)
  				{
  					//Convert the string to an int. Store in rot.				
	  				stringstream ss2(tok[1]);
  					ss2>>rot;
  				}
  				else
  				{
  					//Deals with the case without numbers. 
  					rot=90;
  				}
  				
  				//As we are rotating RIGHT, the factor is POSITIVE. Just add. 
  				dir=dir-rot;
  			}
  			else if(instructions[i]=="TURN AROUND")
  			{
  				//180 degree flip. 
  				dir=dir+180;
  			}
  			else if(instructions[i]=="HALT")
  			{
  				//breaks the loop. No further action.
  				i=instructions.size();
  			}
  		}
  		//deal with all of your final calc's here in one mod. 

  		//For negative numbers.

  		if(dir<0)
  		{
  			//-360
  			dir=abs(dir);
  			//360
	  		dir=dir%360;
	  		//0
	  		if(dir>0)
	  		{
		  		dir=360-dir;	
	  		}		
  		}
  		else
  		{
  			dir=dir%360;
  		}
  		return dir;
	}
};

