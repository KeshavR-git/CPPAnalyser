#include <iostream>
using namespace std;


class ThrowTheBall
{
public:
	int timesThrown(int N,int M, int L){
		int round=0;
		int position=1;
		int array[N];
		for(int i=0;i<N;i++){
			array[i]=0;
		}
		while(round!=10000000000000){
			

			if(position==1){

				//add one at the position of 1 array[0];
				// cout<<"position "<<position<<endl;
				array[position-1]=array[position-1]+1;

				//if position 1 is get M times, return round
				if(array[position-1]==M){
					return round;
				}

				// if position 1 is not even // do the following
				else if(array[position-1]%2!=0){
					// cout<<"Bchek="<<position<<endl;
					position=position-L;
					// cout<<"Achek="<<position<<endl;
					if(position==0){
				
						position==N;
						round++;
					}
					else if(position<0){
						// cout<<"here"<<endl;
						position=N+position;
						round++;
					}
					else{
						position=position+L;
						round++;
					}
				}
				else{
					position=position+L;
					if(position==0){
						position=1;
						round++;
					}
					else if(position>N){
						position=position-N;
						if(position==0){
							
							position=1;
							round++;
						}
						else{
							round++;
						}
					}
					else{
						round++;
					}
				}

			}
			else{
				// cout<<"position "<<position<<endl;
				if(position==0){
					position=N;
				}
				array[position-1]=array[position-1]+1;
				if(array[position-1]==M){
					return round;
				}
				else if(array[position-1]%2!=0){
					position=position-L;
					if(position==0){
						position=N;
						round++;
					}
					else if(position<0){
						position=N+position;
						round++;
					}
					else{
						round++;
					}
				}
				else{
					// cout<<"Bchek="<<position<<endl;
					position=position+L;
					// cout<<"Achek="<<position<<endl;
					if(position==0){
						position=1;
						round++;
					}
					else if(position>N){
						// cout<<"Bchek1="<<position<<endl;

						position=position-N;
						// cout<<"Achek1="<<position<<endl;
						if(position==0){
							
							position=1;
							round++;
						}
						else{
							round++;
						}
					}
					else{
						round++;
					}
				}
	
			}
			
		}
		
	}

};




