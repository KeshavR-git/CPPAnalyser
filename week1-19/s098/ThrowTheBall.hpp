#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


class ThrowTheBall{

	public:
	int timesThrown( int N, int M, int L ){

		int edges = N;
		vector<int> divisors;

		for( int i = 2; i <= 50; i++ ){

			if( N%i == 0 )
				divisors.push_back( i );
		}	

		for( vector<int>::iterator it = divisors.begin(); it != divisors.end(); ++it ){

			if( ( L*(*it) )%N == 0 ){
				edges = *it;
				break;
			}
		}

		return  edges*( M-1 );
	}
};
