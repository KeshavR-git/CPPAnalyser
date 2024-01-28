#include <vector>
#include <string>
#include <iostream>

#define p(x) { std::cout << x << std::endl; exit(1);}

int min(int a, int b) {
	if(a < b) {
		return a;
	} else {
		return b;
	}
}

class PartySeats {
	//True = a occurs before b lexicographically
	//False = a does not occur before b lexicographically
	bool lexBefore(std::string a, std::string b) {
		int minLength = min(a.length(), b.length());
		for(int i=0; i<minLength; i++) {
			if((int)a[i] == (int)b[i]) {
				continue;
			} else if((int)a[i] < (int)b[i]) {
				return true;
			} else {
				return false;
			}
		}
		//If the string is identical
		//Set to true since short string should be before the longer string.
		return true;
	}

	void swap(std::string* a, std::string* b) {
		std::string temp = *a;
		*a = *b;
		*b = temp;
	}

	int pivot(std::string* arr, int start, int end) {
		//We let the pivot be the end
		int pivot = end;
		end--;

		//Pivot sorting
		while(true) {
			//If start has passed end, we terminate
			if(start > end) {
				break;
			}
			//Checking lexBefore == true box
			bool wrongLeft = false;
			bool wrongRight = false;

			if(lexBefore(arr[start], arr[pivot]) == true) {
				start++;
			} else {
				wrongLeft = true;
			}
			//Checking lexBefor == false box
			if(lexBefore(arr[end], arr[pivot]) == false) {
				end--;
			} else {
				wrongRight = true;
			}

			//Checking if both are true.
			if(wrongLeft == true && wrongRight == true) {
				swap(&arr[start], &arr[end]);
				start++;
				end--;
			}
		}

		//We then swap start with pivot
		swap(&arr[start], &arr[pivot]);
		//Pivot then returns the start of the After pivot box.
		return start;
	}

	//quicksort that uses pivot
	void quicksort(std::string* arr, int start, int end) {
		//If the start and end is the same then we've reached base case.
		//Such an array will be a 1 element array. In which case, it's already sorted.
		if(start >= end) {
			//Do nothing
		} else {
			//Run the pivot
			int piv = pivot(arr, start, end);
			//Call quicksort on the Before Pivot box
			quicksort(arr, start, piv-1);
			//Call quicksort on the AFter pivot box
			quicksort(arr, piv, end);
		}
	}

	//****************************************
	//Place stuff.
	//Returns the name
	std::string getName(std::string input) {
		for(int i=0; i<input.size(); i++) {
			if(input[i] == ' ') {
				return input.substr(0,i);
			}
		}
	}

	//Checks if girl or boy
	bool isGirl(std::string input) {
		for(int i=0; i<input.size(); i++) {
			if(input[i] == ' ') {
				if(input[i+1] == 'g') {
					return true;
				} else {
					return false;
				}
			}
		}
	}

	std::vector<std::string> place(std::vector<std::string> input) {
		//returns an empty string if length is odd.
		std::vector<std::string> empty;
		if(input.size() % 2 != 0) {
			return empty;
		}
		//Creates vector puts Host and Hostest in the right positions
		std::vector<std::string> seatPlan(input.size()+2);
		seatPlan[0] = "HOST";
		seatPlan[seatPlan.size()/2] = "HOSTESS";

		//Puts girls into their seats
		int i=1;
		int nextGirl = 0;
		while(i < seatPlan.size()) {
			//Find next girl, if no more girls, return empty.
			while(nextGirl <= input.size()) {
				//p(nextGirl);
				//Returns empty if there's no more girls
				if(nextGirl == input.size()) {
					return empty;
				} else if(isGirl(input[nextGirl]) == true) {
					//Will break if it's a girl. (nextGirl is stored as index)
					break;
				} else {
					//Will do nothing if it's a boy.
				}
				nextGirl++;
			}
			//Put the girl in the seat.
			seatPlan[i] = getName(input[nextGirl]);
			nextGirl++;
			i += 2;

			//Makes sure next seat isn't Hostess
			if(i == seatPlan.size()/2) {
				i+=2;
			}
		}

		//Put boys into their seats
		i=2;
		nextGirl = 0;
		while(i < seatPlan.size()) {
			//Find next girl, if no more girls, return empty.
			while(nextGirl <= input.size()) {
				//Returns empty if there's no more girls
				if(nextGirl == input.size()) {
					return empty;
				} else if(isGirl(input[nextGirl]) == false) {
					//Will break if it's a boy. (nextGirl is stored as index)
					break;

				} else {
					//Will do nothing if it's a boy.
				}
				nextGirl++;
			}
			//Put the girl in the seat.
			seatPlan[i] = getName(input[nextGirl]);
			nextGirl++;
			i += 2;
		}
		return seatPlan;
	}

public:
	std::vector<std::string> seating(std::vector<std::string> attendees) {
		//Sorts attendees into alphabetical order.
		quicksort(&attendees[0], 0, attendees.size()-1);

		return place(attendees);
	}
};