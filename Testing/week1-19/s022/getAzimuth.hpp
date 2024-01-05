#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring
{
public:
	AzimuthMonitoring(){}
	int getNum(string num)
	{
		int j = 0;
		string number;
		int integer;
		stringstream ss(num);
		while(getline(ss, number, ' ')&&j<2)
		{ 
			if(j==1) integer = stoi(number);
			j++;
		}
		return integer;
	}
	int getAzimuth(vector <string> instructions)
	{
		int degrees = 0;


		for(unsigned int i=0 ; i<instructions.size() ; i++)
		{

			if(instructions[i][0]=='R')	
			{
			    cout<<"right"<<endl;
				if(instructions[i]=="RIGHT") degrees += 90;
				else degrees += getNum(instructions[i]);
				if(degrees>360) degrees-=360;
			}
			else if(instructions[i][0]=='L')	
			{
			    cout<<"left"<<endl;
				if(instructions[i]=="LEFT") degrees -= 90;
				else degrees -= getNum(instructions[i]); 
				if(degrees<0) degrees+=360;
			} 
			else if(instructions[i][0]=='T')	
			{
				if(instructions[i]=="TURN AROUND") degrees += 180;
				if(degrees>360) degrees-=360;
			}
			else break;
		}
		if(degrees==360) return 0;
		return degrees;
	}
};

/*int main()
{
    cout<<"hello"<<endl;
    AzimuthMonitoring mon = AzimuthMonitoring();
    vector <string> re = {"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT"};
    re.push_back("LEFT 5");
    re.push_back("RIGHT 10");
    re.push_back("RIGHT 20");
    re.push_back();
    re.push_back();
    re.push_back();
    re.push_back();
    re.push_back();
    cout<<"angle is"<<mon.getAzimuth(re)<<endl;
    return 0;
}*/