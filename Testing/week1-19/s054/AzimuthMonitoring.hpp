#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int XX_MARKER_XX;

 
 
class AzimuthMonitoring
{
  public:

  int Special_Instruction_Degree(string Speical_Action)
  //Function for pick up special degree of robot turns

  {
    istringstream SA(Speical_Action);
    //Read the spcial actions 


    string action;
    //Action names


    int s_degree;
    //Special degree

    SA >> action >> s_degree;
    //the order of special action is "action_name  special degree", such as "LEFT 5"

    return s_degree;
  }

  int Correct_Degree(int c_degree)
  //Function for correcting the azimuths is between 0° and 360°

  {
    while (c_degree < 0)
      //When final azimuth is less than 0°, then add 360°
    {
      c_degree = c_degree + 360;
    }

    while (c_degree >= 360)
      //When final azimuth is greater than or equal 360°, then minus 360°
    {
      c_degree = c_degree - 360;
    }

    return c_degree;
  }


  int getAzimuth(vector<string> instructions)
  
  {
    int amizuth = 0;
    //Record the final amizuths

    for (int i = 0; i <instructions.size(); i++)
    {
    	if(instructions[i] == "LEFT")
        //Turn left
      {
    		amizuth = amizuth - 90;
    	}

      else if (instructions[i] == "RIGHT")
        //Turn right
      {
        amizuth = amizuth + 90;
      }

      else if (instructions[i] == "TURN AROUND")
        //Turn around
      {
        amizuth = amizuth + 180;
      }

      else if (instructions[i].find("LEFT ") != string::npos)
        //Turn speical degree of left
      {
        amizuth = amizuth - Special_Instruction_Degree(instructions[i]);
      }

      else if (instructions[i].find("RIGHT ") != string::npos)
        //Turn speical degree of right
      {
        amizuth = amizuth + Special_Instruction_Degree(instructions[i]);
      }

      else if (instructions[i] == "HALT")
        //Stop executing instructions and correct the azimuth degree
      {
        amizuth = Correct_Degree(amizuth);
        return amizuth;
      }
    }
    amizuth = Correct_Degree(amizuth);
    //Correct the azimuth degree

    return amizuth;  
  }
};

