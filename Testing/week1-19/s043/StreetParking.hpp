#include <iostream>
using namespace std;
int XX_MARKER_XX;

class StreetParking{
public:
	int freeParks(string street){
	int res=0;
	if(street.length()==1){ 
		if( street[0]=='-'){
		res++;
	}
	}else if(street.length()==2){
		if(street[0]=='-' && street[1]!='B' && street[1]!='S' ){
			res++;
		}
		if(street[1]=='-' && street[0]!='S'){
			res++;
		}
	}else{
		if(street[0]=='-' && street[1]!='B' && street[2]!='B' && street[1]!='S'){
			res++;
		}
		if(street[street.length()-2]=='-' && street[street.length()-3]!='S' && (street[street.length()-1]=='-' || street[street.length()-1]=='D') ){
			res++;
		}
		if(street[street.length()-1]=='-' && street[street.length()-2]!='S'){
			res++;
		}
		for(int i=1;i<street.length()-2;i++){
			if(street[i-1]!='S' && street[i]!='D' && street[i]!='B' && street[i]!='S' && street[i+2] != 'B' && street[i+1] != 'B' && street[i+1]!='S' ){
				res++;
			}
		}
	}
		return res;
	}
};