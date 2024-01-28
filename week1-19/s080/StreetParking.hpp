#include<iostream>
#include<string>
using namespace std;
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
	//Get the street length for use with my secondary array that determines whether or not a park is free. Create this array. 
	int streetLength = street.length();
	int compuAr[streetLength];

	//Initialise compuAr to 0. 
	for(int tmp=0;tmp<streetLength;tmp++)
	{
		compuAr[tmp]=0;
	}
	
	//Traverse the string and modify the secondary array as required. 
	for(int k=0;k<streetLength;k++)
	{	
		if(street[k]=='B')
		{
			//Don't park where a bus stop is. 
			compuAr[k]=1;	
			if(k==1)
			{
				//Can't park 5m in front of a bus stop.
				//This case ensures we stay within the array scope.  
				compuAr[k-1]=1;
			}		
			if(k>1)
			{
				//Can't park within 10m of a bus stop. 
				compuAr[k-1]=1;
				compuAr[k-2]=1;
			}
		}
		else if(street[k]=='S')
		{
			//Don't park where a street is. 
			compuAr[k]=1;
			if(k==0)
			{
				//This covers for S-... case. 
				compuAr[k+1]=1;
			}
			if(k>=1)
			{
				//All other cases. Don't park within 5m of street either way. 
				compuAr[k-1]=1;
				if(k!=streetLength-1)
				{
					//This covers -S case. 
					compuAr[k+1]=1;
				}
			}
		}
		else if(street[k]=='D')
		{
			//Don't park in someone's driveway. 
			compuAr[k]=1;
		}
	}
	
	int sum=0; //number of unavaliable spots (counted from the array)

	for(int m=0;m<streetLength;m++)
	{
		//If there's no space, add to sum. 
		sum=sum+compuAr[m];
	}

	//Work out the number of free spots by subtracting taken spots from total spots. 
	int FPs=streetLength-sum;
	return FPs;
  }
};
