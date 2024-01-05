#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std ;
int XX_MARKER_XX;


class DownloadingFiles
{
	public:
		// default constructor
		DownloadingFiles() {}

		// arrange the guests clockwise around the table, starting with the HOST
		double actualTime(vector<string> tasks) {

			int count = 0 ;
			double total = 0.0 ;
			vector<double> speed, time ;
			vector<string> temp ;

			// sort the task list by remaining time in a new temp vector
			for (size_t i = 0 ; i < tasks.size() ; i++) {
				
				// reverse the time and speed ints
				temp.push_back( tasks[i].substr( tasks[i].find(" ") + 1 ) + " " + tasks[i].substr( 0, tasks[i].find(" ") ) ) ;

				// sort by remaining time
				sort(temp.begin(), temp.end()) ;

			}

			// isolate the speed and time ints from the string
			for (size_t i = 0 ; i < temp.size() ; i++) {
				
				time.push_back( stod( temp[i].substr( 0, temp[i].find(" ") ) ) ) ;
				speed.push_back( stod( temp[i].substr( temp[i].find(" ") + 1 ) ) ) ;

			}

			while ( count < temp.size() ) {
				
				// wait for first file to finish downloading
				total += time[count] ;
				for ( size_t i = ( count + 1 ) ; i < time.size() ; i++ ) {
					time[i] -= time[count] ;
				}

				// redistibute bandwidth to next file in the list
				if ( count < temp.size()-1 ) {
					time[count+1] = ( time[count+1] * ( speed[count+1] / ( speed[count] + speed[count+1] ) ) ) ;
					speed[count+1] += speed[count] ;
				}

				count++ ;
			
			}

			return total ;
		
		}
};