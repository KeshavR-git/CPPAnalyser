using namespace std;

class EggCartons {
public:
	int minCartons(int n) {
	if (n==6) {
		return minCartons(n-6)+2;
	}
	if (n==8) {
		return minCartons(n-8)+2;
	}
	if (n%2!=0 || n<6 || n==10) {
		return -1;
	}
	if (n%8==0) {
		return	minCartons(n-8)+1;
	}
	if (n%8==0) {
		return minCartons(n-6)+1;
	}
	if (n!=8) {
		return minCartons(n-6)+1;
	}
	return minCartons(n-8)+1;
}

};