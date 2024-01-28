#include <string>
#include <iostream>
using namespace std;

class StreetParking{
public:
	int freeParks(string street){
		int count=0;

		string s = street;

		for(int i=0;i<s.size();i++){
			if(s[i]=='-'){
				if(i!=0 && i<s.size()-2){
					if(s[i+1]!= 'S' && s[i-1]!='S' && s[i+2]!='B' && s[i+1]!='B'){
						count++;
					}
				} else if (i!=0 && i<s.size()-1){
					if(s[i+1]!= 'S' && s[i-1]!='S' && s[i+1]!='B'){
						count++;
					}
				} else if(i==0 && i<s.size()-2){
					if(s[i+1]!= 'S' && s[i+1]!='B' && s[i+2]!='B'){
						count++;
					}
				} else if(i==0 && i<s.size()-1){
					if(s[i+1]!= 'S' && s[i+1]!='B'){
						count++;
					}
				} else {
					if(s[i-1]!='S'){
						count++;
					}
				}
			}
		}
		
	

		return count;
	}

};