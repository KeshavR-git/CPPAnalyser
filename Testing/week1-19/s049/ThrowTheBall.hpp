int XX_MARKER_XX;
#ifndef ThrowTheBall_hpp
#define ThrowTheBall_hpp

class ThrowTheBall{
	public:
		int timesThrown(int N, int M, int L){
			int nMultiple=1;
			int throwsBackToFirst;
			int totalThrows;

			while ((N*nMultiple)%L!=0)
			{
				nMultiple++;
			}

			N=N*nMultiple;
			throwsBackToFirst=N/L;
			totalThrows = throwsBackToFirst*(M-1);
			
			return totalThrows;
		}
};
#endif