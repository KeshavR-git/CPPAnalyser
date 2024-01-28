using namespace std;

class ThrowTheBall
{
	public:
	int timesThrown(int N, int M, int L)
	{
		//Initialise
		int length=N;
		int array[N];
		int playerIndex = 0;

		//Declares an empty array - not the cleanest way, but the way that web sub accepts. 
		for(int tmp=0;tmp<N;tmp++)
		{
			array[tmp]=0;
		}   
		
		while(array[playerIndex]<M-1)
		{
			//While the player (@playerIndex) has had it less than M-1 times. 
			//Increment the number of times received. **M-1 because you can't 				THROW until you've received

 			array[playerIndex]=array[playerIndex]+1;

			//Assess whether to throw left or right
			if(array[playerIndex]%2==0)
			{
				//Throw LEFT L places
				playerIndex=playerIndex-L;
				if(playerIndex<0)
				{
					playerIndex=playerIndex+N;
				}
			}
			else
			{	
				//Throw RIGHT L places
				playerIndex=playerIndex+L;
				playerIndex=playerIndex%N;
			}
		}			

		//Game is over. Count the number of throws and return. 
		
		int res=0;
		for(int tmp = 0; tmp<N;tmp++)
		{
			res=res+array[tmp];
		}		
		return res;
	}
};
