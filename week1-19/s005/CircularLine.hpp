#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CircularLine{

	public:
	int longestTravel(vector<int> t){
		
		/* here want to use a static array if possible, but for now use vector for simpicity
		// allocating space for no. of shortest travel times
		int t_size; int size=t_size;
		for(int i=t.size()-1;i>0;i--){
			size += i;
		}
		int shortestTravels[size-1];
		*/

		int t_size = t.size();
		vector<int> s_t; // shortest travels

		// need sum of t elements for later use (calculate backwards travel)
		int sum = 0;
		for(int i=0;i<t_size;i++){
			sum += t[i];
		}

		int fwd=0, bck=0, offset = 0; // offset is used to index travels[] within nested loop
		
		for(int i=0;i<t_size;i++){

			for(int j=i;j<t_size;j++){
				fwd += t[j];
				bck = sum - fwd;

				//DEBUG:
				//cout<<"fwd: "<<fwd<<", bck:"<<bck<<endl;
				
				if(fwd<bck){
					s_t.push_back(fwd);
				}
				else{
					s_t.push_back(bck);
				}
			}
			fwd = 0;

		}

		// want to find max element in acculumated travel values
		int max = s_t[0];
		for(int i=1;i<s_t.size();i++){
			if(s_t[i]>max){
				max=s_t[i];
			}
		}

		return max;

	}

};