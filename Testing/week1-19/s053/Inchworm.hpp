#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

class Inchworm
{
	public:
		int lunchtime(int branch, int rest, int leaf)
		{
			int res=0;
			if(rest==leaf && rest==1){
				res=branch/rest+1;
			}else{ 
			for(int i=0;i<branch+1;i=i+rest){ //rest position on the branch
				for (int j=0; j<branch+1; j=j+leaf){ //leaves' position on the branch
					if (i==j){
						res++;
					}
				}
			}
		}

			return res; //return your result
		};
};