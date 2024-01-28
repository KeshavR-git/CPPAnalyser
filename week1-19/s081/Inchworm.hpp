class Inchworm
{
	private:
	int gcf(int x, int y) {
		if (x == 0)
			return y;
		return gcf(y % x, x);
	}

	public:
	int lunchtime(int branch, int rest, int leaf) {
		return branch / ((rest * leaf)/gcf(rest, leaf)) + 1;
	}
};