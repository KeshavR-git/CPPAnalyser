#ifndef Inchworm_hpp
#define Inchworm_hpp

class Inchworm{
	public:
	int lunchtime(int branch, int rest, int leaf){
		int consumed=1;
		for (int i = 0; i <= branch; i+=rest)
			{
				if (i!=0 && i%leaf==0)
				{
					consumed++;
				}
			}
		return consumed;
	}
};
#endif

