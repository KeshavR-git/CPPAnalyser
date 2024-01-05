int XX_MARKER_XX;
class EggCartons
{
public:
	int minCartons(int n){
		for (int i=n/8; i>=0;i--){
			int sub = n-(8*i);
			if (sub%6==0){
				return (sub/6)+i;
			}
		}
		return -1;
	}
};