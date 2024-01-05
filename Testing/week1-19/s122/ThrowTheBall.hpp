#include <iostream>
#include <math.h>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall {
public:
	int timesThrown(int n, int m, int l){
		//Constraints checking
		if(n<3 || n>50){
			return -1;
		}
		if(l<1 || l>n-1){
			return -1;
		}
		if(m==1){ // if m is 1, then the game ends when it starts
			return 0;
		}
		else if(m<0 || m>50){
			return -1;
		}
		int players_held [n];
		for (int i=0; i<n; i++){
			players_held[i] = 0;
		}
		players_held[0] = 1;
		int total = 0;
		bool end_game = false;
		int player = 0; //references which player is holding the ball right now (0 to n-1)
		while (!end_game){
			
			if (players_held[player]%2 == 0){ //if even, pass clockwise
				player = (player+l)%n;
			}
			else {//if odd, pass counter-clockwise
				player = ((player-l)%n);
				if (player<0){
					player = n+player;
				}
			}
			players_held[player] += 1;
			total += 1;
			
			if (players_held[player] == m){
				return total;
			}
		
		}

	}

};