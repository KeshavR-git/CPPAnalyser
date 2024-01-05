#include<iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons{
public:
	int x=6;
	int y=8;
	int cout=0;
	int minCartons(int n){
		for(int i=0;i<=n/x;i++){
		for(int j=0;j<=n/y;j++){
			if(n%2==0 && x*i+y*j==n){
				return i+j;
			}
			else if(n%2!=0 || n<6 ||n==10){
				return -1;
			}
		}
		
	}
	}
};


