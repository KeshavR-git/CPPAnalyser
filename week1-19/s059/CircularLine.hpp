#include <iostream>
#include <vector>
using namespace std;


#ifndef CIRCULARLINE_HPP
#define CIRCULARLINE_HPP

int temp2;

class CircularLine{
    public:
    int longestTravel(vector<int> t){

        // Calculates vector traversal from left to right
        int r_path;

        // Calculates vector traversal from right to left
        int l_path;

        // Return value
        int max = 0;
        
        // Calculates the minimum value for each possible path while traversing in both directions
        //i.e. For input {1,1,1,1,4} - stations are numbered 0 to 4 respectively using the indexes of the vector
        // To travel from station 1 to 4 - calculate right_traversal = stations 1->2->3->4 = 1+1+1 = 3
        //                                 calculate left traversal = stations 1->0->4 = 1+4 = 5
        //                               - Minimum(3,5) = 3
        // Then, continue for each possible path, tracking the largest, minimum value  
        for(int i = 0; i < t.size(); i++)
        {
            for(int j = 0; j < t.size(); j++)
            {
                if(i != j)
                {
                    r_path = calc_right_path(i, j, t);
                    //std::cout << "Right Path: " << i << j << " : " << r_path << std::endl;
                    l_path = calc_left_path(i,j,t);
                    //std::cout << "Left Path: " << i << j << " : " << l_path << std::endl;
                    int min_value = calc_min(l_path, r_path);
                    //std::cout << "Min: " << i << j << " : " << min_value << std::endl;
                    if(min_value > max)
                    {
                        max = min_value;
                    }
                }

                else
                {
                    continue;
                }
                
            }
        }

        return max;
    }

    int calc_right_path(int start, int end, vector<int> t)
    {
        int right_path = 0;
        vector<int> buf;
        int temp = 0;
        int temp2 = 0;

        // Loop forwards
        if(start < end && start >= 0)
        {
            for(int i = start; i < end; i++)
            {
                temp = temp + t.at(i);
            }

            return temp;
        }

        // Loop forwards, wrapping around the vector if needed.
        if(start > end && start != end)
        {
            
            // Loop from start to end
            for(int i = start; i <= t.size() - 1; i++)
            {
                temp = temp + t.at(i);
            }

            // Add summations to index 0 at buffer
            buf.push_back(temp);

            // Loop from back of array to end point
            for(int i = 0; i <= end - 1; i++)
            {
                temp2 = temp2 + t.at(i);
            }

            // Add that result to buffer value.
            int result = temp2 + buf.at(0);

           // Return result;
           return result;
        }
    }

    int calc_left_path(int start, int end, vector<int> t)
    {
        int left_path = 0;
        vector<int> buf;
        int temp = 0;
        int temp2 = 0;

        // Loop backwards from start point until index 0 is reached
        if(end < start && end >= 0)
        {
            for(int i = start - 1; i >= end; i--)
            {
                temp = temp + t.at(i);
            }

            return temp;
        }

        if(end > start && end != start)
        {
            
            // Loop to 0
            for(int i = start - 1; i >= 0; i--)
            {
                temp = temp + t.at(i);
            }

            // Add summations to index 0 into buffer
            buf.push_back(temp);

            // Loop from back of array to end point
            for(int i = t.size() - 1; i >= end; i--)
            {
                temp2 = temp2 + t.at(i);
            }

            // Add that result to buffer value.
            int result = temp2 + buf.at(0);

           // Return result;
           return result;
        }
    }

    // Return minimum of 2 integers
    int calc_min(int a, int b)
    {
        if(a <= b)
        {
            return a;
        }

        else
        {
            return b;
        }
        
    }
        
    
};


#endif