#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


class AzimuthMonitoring
{
    public:

    int getAzimuth( vector<string> instructions )
    {
        int currentDirection = 0;

        /**
         * Loop over each instruction to manipulate up to the final direction
         * that the robot is facing.
         */
        for (auto instruction : instructions)
        {
            int degreesToRotate = parseInstruction( instruction );

            /**
             * Check that the return value was corrent and that HALT
             * wasn't executed
             */
            if (degreesToRotate > 360)
                break;

            currentDirection = addRotation( currentDirection, degreesToRotate );
        }

        return currentDirection;
    }

    private:

    /**
     * Handle parsing the string instruction into the degrees it represents.
     * 
     * @var string instruction to parse
     * 
     * @return int degrees of the corresponding instruction
     */
    int parseInstruction(string instruction)
    {
        istringstream iss(instruction);

        /**
         * Check for exact matches with specific keywords
         */
        if (instruction == "LEFT")
            return -90;

        else if (instruction == "RIGHT")
            return 90;

        else if (instruction == "TURN AROUND")
            return 180;

        /**
         * Handle custom inputs
         */
        else if (instruction.find("LEFT ") != string::npos)
        {
            int number;
            iss >> instruction >> number;
            return -1 * number;
        }
        
        else if (instruction.find("RIGHT ") != string::npos)
        {
            int number;
            iss >> instruction >> number;
            return number;
        }

        /**
         * Handle the HALT case or any unknown keywords
         */
        else
            return 1000;
    }

    /**
     * Handle adding/subtracting the rotation and keeping track of whether
     * the value is within 0 and 360 degrees.
     * 
     * @var int currentDirection is the degrees value currently.
     * @var int degreestToRotate is the degrees to rotate the robot to.
     * 
     * @return int newDirection after adding the two values together.
     */
    int addRotation(int currentDirection, int degreesToRotate)
    {
        int newDirection = currentDirection + degreesToRotate;

        /**
         * Handle keeping the direction within 0 and 360 (inclusively)
         */
        while (newDirection >= 360 || newDirection < 0)
        {
            if (newDirection >= 360)
                newDirection = newDirection - 360;

            else if (newDirection < 0)
                newDirection = newDirection + 360;
        }

        return newDirection;
    }

};