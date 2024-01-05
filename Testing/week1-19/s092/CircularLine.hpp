#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class CircularLine{
public:
	int longestTravel(vector<int>& t){
		int max=0;
		int way1=0;
		int way2=0;
		int length = t.size();
		int i=0;

		for(int i = 0; i < length;i++){
			for(int k = i+1; k < length;k++){
				way2=0;
				way1+=t[k];
				for (int j = 0; j < length; j++){
					way2+=t[j];
				}
				way2-=way1;
			if(max<min(way1,way2)){
				max=min(way1,way2);
			}
			}

			way1=0;

		}	
		return max;
	}
};