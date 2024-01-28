using namespace std;
#ifndef STREETPARKING_HPP
#define STREETPARKING_HPP

class StreetParking{
public:
	int freeParks(string street){
		string temp (street.length(), '-');
		for(int i=0; i<street.length(); i++){
			if(street[i]=='D'){
				temp[i]='X';
			}
			if(street[i]=='S'){
				temp[i]='X';
				temp[i-1]='X';
				temp[i+1]='X';
			}
			else if(street[i]=='B'){
				temp[i]='X';
				temp[i-1]='X';
				temp[i-2]='X';
			}
		}
		
		int count=0;
		for(int i=0; i<street.length(); i++){
			if(temp[i]=='-'){
				count++;
			}
		}
		return count;
	}
};
#endif
