#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;



#ifndef THROWTHEBALL_HPP
#define THROWTHEBALL_HPP

class ThrowTheBall
{
    public:
    int timesThrown(int N, int M, int L)
    {
        // Buffer holding how many times each player receives ball.
        vector<int> players(N);

        // Initialise buffer to 0
        for(int i = 0; i < N; i++)
        {
            players.push_back(0);
        }

        // Track number of passes
        int passes = 0;

        // Tracks current player
        int index = 0;

        // Play the Game
        while(getMax(players) < M)
        {
            // Get current player and chek how many times player receives ball
            players.at(index)++;
            int p = checkPlayer(players, index);

            // Pass ball
            int next_player = passBall(N, L, p, index);
            passes++;

            // Change current player index
            index = next_player;

        }

        // Subtract 1 - we count the pass going to the player who will have p = M when
        // they receive the pass.
        return passes - 1;
    
       

    } 

    // Function to pass the ball
    // Returns index of next pass.
    int passBall(int N, int L, int p, int current)
    {
        // Even - pass L places to the left
        if(p % 2 == 0)
        {
            return ((current + L) % N);
        }

        // Odd - pass L places to the right
        if(p % 2 == 1)
        {
            // Esnure indexes wrap round incase of negative result

            int nextPass = ((current - L) % N);
            if(nextPass < 0)
            {
                return N + nextPass;
            }

            else
            {
                return nextPass;
            }
        }
    } 

    int getMax(vector<int> v)
    {
        int max = v.at(0);

        for(int i = 0; i < v.size(); i++)
        {
            if(v.at(i) > max)
            {
                max = v.at(i);
            }
        }

        return max;
    }

    // Check how many times player has received ball
    int checkPlayer(vector<int> players, int current)
    {
        return players.at(current);
    }

};



#endif