#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
public:
	int freeParks(string street){
		int count=0;
		int array[street.length()];
		for(int i=0;i<street.length();i++){
			if(street[i]=='-'){
				array[i]=1;
			}
			else{
				array[i]=0;
			}
		}
		for(int i=0;i<street.length();i++){
						if(street[i]=='D'){
				array[i]=0;
			}
			if(street[i]=='B'&& i==0){
				array[i]==0;
			}
			else if(street[i]=='B'&& i>0 && i<=street.length()-1){
				if(street[i-1]=='-'&&street[i-2]=='-'||street[i-1]!='-'&&street[i-2]!='-'||street[i-1]!='-' && street[i-2]=='-'){
					array[i]=0;
					array[i-1]=0;
					array[i-2]=0;
				}
				else if(street[i-1]=='-'){
					array[i]=0;
					array[i-1]=0;
				}
			}
			if(street[i]=='S'){
				if(i==0){
					array[i]=0;
					array[i+1]=0;
				}
				else if(i==street.length()-1){
					array[i]=0;
					array[i-1]=0;
				}
				else if(i>0 && i <=street.length()-2){
					array[i]=0;
					array[i-1]=0;
					array[i+1]=0;
				}
		
			}
			
		}
		for(int i=0;i<street.length();i++){
			
			if(array[i]==1){
				count++;
			}
		}
		return count;
	}
};