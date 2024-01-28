#include <iostream>
#include <string.h>
using namespace std;



// Return number of free parks;
int parks = 0;

// Buffer containing remaining parks
//vector<char> parksBuffer;

#ifndef STREETPARKING_HPP
#define STREETPARKING_HPP

class StreetParking{

    public:

    int freeParks(string street)
    {

        // Return size of string
        int size = strlen(street.c_str());

        // Return number of parks
        int parks = 0;
    

        // Get free parks
        for(int i = 0; i < size; i++)
        {
            // continue if the current element is S
            if(street[i] == 'S')
            {
                continue;
            }

            // If the next element in S, continue
            if (i + 1 < size && street[i + 1] == 'S')
            {
                continue;
            } 
            
            // If the previous element is S, continue
            if (i - 1 >= 0 && street[i - 1] == 'S')
            {
                continue;
            }
            

            // Contine if the current element is B
            if(street[i] == 'B')
            {
                continue;
            }

            // Continue if upcoming element is B
            if (i + 2 < size && street[i + 2] == 'B')
            {
                continue;
            }
            
            if (i + 1 < size && street[i + 1] == 'B')
            {
                continue;
            }

            // Continue if current element is D
            if(street[i] == 'D')
            {
                continue;
            }

            parks++;


        }


        // Return free parks
        return parks;


    }

   
    


    
    
        
};


#endif