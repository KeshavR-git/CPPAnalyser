#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <stdlib.h>
using namespace std;
int XX_MARKER_XX;


class UserInput{

	public:
	// takes a string input and separates words into substrings, storing
	// them in a vector
	void strSeparate( std::string fullString, std::vector<std::string>* subStrings ){

		std::string subStr = "";

		for( unsigned int j = 1; j <= fullString.length(); j++ ){
	
			if( fullString.at( j - 1 ) != ' ' ){

				subStr.push_back( fullString.at( j - 1 ));

			}

			if( ( j == fullString.length() ) || fullString.at( j - 1 ) == ' ' ){

				subStrings -> push_back( subStr );
				subStr = "";	
			}
		}
	}
	
	// takes as input a string containing a number. Returns the number as
	// an integer type
	int intConvert( std::string str ){

		return atoi( str.c_str() );
	}

};

class AzimuthMonitoring{

	UserInput ui1;
	vector<string> subStrings;

	public:
	int getAzimuth( vector<string> instructions ){

		int absoluteAngle = 0;

		for( vector<string>::iterator it = instructions.begin(); it != instructions.end(); ++it ){

			if( *it == "LEFT" ){
	
				absoluteAngle = absoluteAngle - 90;

			} else if( *it == "RIGHT" ){
	
				absoluteAngle = absoluteAngle + 90;

			} else if( *it == "TURN AROUND" ){

				absoluteAngle = absoluteAngle + 180;

			} else if( *it == "HALT" ){

				break;

			} else if( *it > "RIGHT" ){

				ui1.strSeparate( *it, &subStrings );
				absoluteAngle = absoluteAngle + ui1.intConvert( subStrings.at(1) );

				subStrings.clear();

			} else if( *it > "LEFT" ){

				ui1.strSeparate( *it, &subStrings );
				absoluteAngle = absoluteAngle - ui1.intConvert( subStrings.at(1) );

				subStrings.clear();
			}
		}

		absoluteAngle = absoluteAngle%360;
		
		if( absoluteAngle < 0 )
			absoluteAngle = absoluteAngle + 360;

		return absoluteAngle;
	}
};
