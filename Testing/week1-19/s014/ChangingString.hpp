#include <string>
#include <bits/stdc++.h>
using namespace std;
int XX_MARKER_XX;

class ChangingString{
	public:
	int distance(string A, string B, int K){
		int C[A.size()];
		int dist =0, tmp =0, count =0, Csize =0;
		bool flag = false;

		for(int i=0; i<A.size(); i++){
			tmp = (int)A[i]-(int)B[i];
			if(tmp < 0){
				C[i] = -tmp;
			} else {
				C[i] = tmp;
			}
		}

		Csize = sizeof(C)/sizeof(C[0]);
		sort(C, C+Csize);

		for(int i=0; i<Csize; i++){
			if(C[i] != 0){
				flag = true;
				break;
			}
		}

		if(flag == true){
			for(int i=0; i<Csize-K; i++)
				dist = dist + C[i];
		} else {
			dist = K;
		}

		return dist;
	}
};