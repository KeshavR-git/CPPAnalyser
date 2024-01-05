#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
public:
	int freeParks(string street){
		int freep=0;
		for (int i=0;i<street.size();i++){
			if(street[i]=='-'){
				if(street[i-1]!='S'&& street[i+1]!='S' && street[i+1]!='B' && street[i+2]!='B'){
					freep++;
				}
			}
		}
		return freep;
	};
};