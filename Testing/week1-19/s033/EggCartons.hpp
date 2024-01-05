int XX_MARKER_XX;
class EggCartons {
public:
	int minCartons(int);
};

int EggCartons::minCartons(int n){
	if(n<14){
		if(n%8!=0 && n%6!=0){
			return -1;
		}
	}
	switch(n%8){
		case 0: return n/8;
		case 6: return (n/8)+1;
		case 4: return (n/8)+1;
		case 2: return (n/8)+1;
		default: return -1;
	}
}
