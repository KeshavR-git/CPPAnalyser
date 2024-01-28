using namespace std;

class CircularLine{
	int longestTravel(int t []){

	//travel time between station 0 and 1 is t[0]
	//travel time between stations n-1 and 0 is t[n-1]
	//find two stations such that the fatest time 
	//between them is the maximal possible of 

	int bound = 1000;
	int count = 0;
	for(int i = 0; i <= 50; i++){
		if (t[i] <= bound && t[i] >=  1){
			count++;
		}
	}
	count-=1;

	//go forward
	//go backwards
	//which one is most optimal??
	int longest = 0;
	int time = 0;

	for(int i = 0; i < count; i++){
		for (int u = 1; u < count; u++){

			if(i != u){
				
				cout << t[i] << " " ;
				cout << t[u] << endl;

				time = t[i] + t[u];
			}
			if(time > longest){
				longest = time;
			}
		}
	}

	return longest;


}
};
