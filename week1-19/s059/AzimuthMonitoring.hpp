#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h> 


#ifndef AZIMUTHMONITORING_HPP
#define AZIMUTHMONITORING_HPP

class AzimuthMonitoring{
    public:
    int getAzimuth(std::vector<std::string> instructions)
    {

        // Holds an individual instruction converted to an integer bearing
        int inst;

        // Holds the cumulative total of each instruction
        int total = 0;

        for(int i = 0; i < instructions.size(); i++)
        {
            // Convert each instruction to an integer bearing and sequentially add them.
            if(instructions.at(i) != "HALT")
            {
                inst = convertInstruction(instructions.at(i));
                total = total + inst;
            }

            else
            {
                // Stop tracking the position if a HALT instruction occurs
                break;
            }
        }

        // Get Final position
        int result =  getPos(total);
        if(result == 360 || result == -360)
        {
            return 0;
        }

        else
        {
            return result;
        }
    }

    // Converts instruction to a position
    int convertInstruction(std::string instruction)
    {
        // Holds temporary values
        std::vector<std::string> buf;

        if(instruction == "LEFT")
        {
            return -90;
        }

        else if(instruction == "RIGHT")
        {
            return 90;
        }

        else if(instruction == "TURN AROUND")
        {
            return 180;
        }

        else if(instruction == "HALT")
        {
            // Exit code to notify end of execution
            return -1;
        }

        // Left and right rotation
       else
       {
           std::string token;
           std::stringstream ss(instruction);
        
           // Place substring in buffer
           while(getline(ss, token, ' '))
           {
               buf.push_back(token);
           }

           if(buf.at(0) == "LEFT")
           {
               int result = std::stoi(buf.at(1));
               return -result;
           }

           if(buf.at(0) == "RIGHT")
           {
               int result = std::stoi(buf.at(1));
               return result;
           }
       }

    }

    // Returns corrected azimuth position
    int getPos(int pos)
    {
        // Return Azimuth position on negative degrees.
        if(pos < 0 and pos >= -360)
        {
            return pos + 360;
        }

        if(pos < -360)
        {
            while(pos < -360)
            {
                pos = pos + 360;
                if(pos >= -360 && pos < 0)
                {
                    break;
                }
            }

            return pos + 360;
        }

        // Return Azimuth position on positive degrees.
        if(pos > 360)
        {
            while(pos > 360)
            {
                pos = pos - 360;
            }

            return pos;
        }

        if(pos >= 0 && pos <= 360)
        {
            if(pos != 360)
            {
                return pos;
            }

            if(pos == 360)
            {
                return 0;
            }
        }
    }

};

#endif