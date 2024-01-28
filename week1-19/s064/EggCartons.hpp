#include <bits/stdc++.h>
using namespace std;

class EggCartons
{
	int temp = 0;
public:


	int minCartons(int in) {
		int a;
		int b;
		int c;
		int d;
		if(in<6){
			return -1;
		}

		if(in%2!=0){
			return -1;
		}

		if(in == 10){
			return -1;

		}

		c  = in/8;
		d = in%8;
		if(d!=0){
			a = c-(6-d)/2;
			b = (6-d)/2+1;
		}
		else{
			a = c;
			b = 0;
		}

		return a+b;

}
};