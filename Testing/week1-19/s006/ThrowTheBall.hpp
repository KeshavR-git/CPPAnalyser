#include <iostream>
using namespace std; 
int XX_MARKER_XX;



class ThrowTheBall
{
public:
	
	int timesThrown(int N,int M,int L) {

	int pass = 0;
	int array[N];

	// int *array = new int[N];

	for(int i=0;i<N;i++) {

		array[i] = 0;
	}

	array[0] = 1;


	int i=0;

	int x = 0;

	while(array[i] != M) {



		//If Odd go Right
		if(array[i] % 2 != 0) {

			x = ((x - L) % N +N) % N;

			array[x] += 1;
			pass++;

			// cout << "i = " << i << " pass = " << pass << endl;
		}

		//If even go Left
		if(array[i] % 2 == 0) {

			x = (x + L) % N;

			array[x] += 1;
			pass++;

			// cout << "i = " << i << " pass = " << pass << endl;
		}

		i=x;


	}

	return pass;

}

	
};

	
	

