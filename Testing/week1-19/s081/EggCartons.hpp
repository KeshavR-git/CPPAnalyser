int XX_MARKER_XX;
class EggCartons
{
	public:
	int minCartons(int n) {
		int count = 0;
		while (n >= 0 && n % 8 != 0) {
			count++;
			n -= 6;
		}
		if (n >= 0) {
			count += n / 8;
			return count;
		} else {
			return -1;
		}
	}
};