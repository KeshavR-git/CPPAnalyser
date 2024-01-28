#include <iostream>
using namespace std;

class EggCartons{
public:
	int minCartons(int n){
		if (n%2==1 || n<6)
		{
			return -1;
		}else if (n==6 || n==8)
		{
			return 1;
		}else{
			int six=minCartons(n-6);
			int eight=minCartons(n-8);
			if (six!=-1 && eight!=-1)
			{
				return min(six,eight)+1;
			}else if (six==-1 && eight!=-1)
			{
				return eight+1;
			}else if(six!=-1 && eight==-1)
			{
				return six+1;
			}else{
				return -1;
			}
		}
	}
};

// int main()
// {
// 	EggCartons e;
// 	cout<<e.minCartons(20)<<endl;
// }