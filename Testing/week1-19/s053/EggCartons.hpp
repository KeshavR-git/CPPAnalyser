using namespace std;
int XX_MARKER_XX;




class EggCartons
{
public:
	int minCartons(int n){
		int x=6, y=8;
		int carton=-1;
		if(n%2 != 0 || n<6 || n==7){
			carton=-1;
		}else if(n%8==0 && n%6 != 0){
			carton= n/8;

		}else if(n%6==0 && n%8!= 0){
			carton = n/6;
			int sub;
			for (int j=1;j<13;j++){//for 8c
				for(int i=0;i<17;i++){ //for 6c
					if(x*i+y*j==n){
						
						sub =j+i;

					}
				}
			}
			if (carton>sub && sub>0){
	            carton=sub;
			}

		}else if(n%8==0 && n%6==0){
			carton= n/8;
		}
		else{
			for (int j=1;j<13;j++){//for 8c
				for(int i=0;i<17;i++){ //for 6c
					if(x*i+y*j==n){
						carton=j+i;
					}
				}
			}
		}
		return carton;
	};
};