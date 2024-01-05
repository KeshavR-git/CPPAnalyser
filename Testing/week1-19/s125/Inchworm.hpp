using namespace std;
int XX_MARKER_XX;
#ifndef INCHWORM_H
#define INCHWORM_H

#pragma once
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf){
    
  	int leaves_eaten = 0;
  	int inchworm_pos = 0;

  	while (inchworm_pos <= branch){
  		//inchworm is at a multiple of the leaf distance
  		if ((inchworm_pos % leaf) == 0)
  		{
  			leaves_eaten++;
  		}
  		inchworm_pos += rest;
  	}

    return leaves_eaten;  
  } 
};

#endif