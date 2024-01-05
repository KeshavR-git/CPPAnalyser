#include <string>
#include <vector>
#include <iostream>
int XX_MARKER_XX;

class PartySeats{
private:
	std::vector<std::string> bubbleSort(std::vector<std::string> list)
	{
		int i, j, k;
		bool swap;
		std::string temp;
		int length = list.size();
		for (i = 0; i < length-1; i++)
		{
			for (j = 0; j < length-i-1; j++)
			{
				std::string one = list.at(j);
				std::string two = list.at(j+1);
				
				k = 0;
				swap = false;
				while (k < one.size() && k < two.size() && swap == false){
					if(one[k] > two[k])
					{
						temp = list.at(j);
						list.at(j) = list.at(j+1);
						list.at(j+1) = temp;
						swap = true;
					} 
					else if (one[k] < two[k])
					{
						swap = true;
					}
					k++;
					if(k == two.size() && k != one.size() && swap == false){
						temp = list.at(j);
						list.at(j) = list.at(j+1);
						list.at(j+1) = temp;
						std::cout << "swapping " << list.at(j) << " " << list.at(j+1) << "\n";
					}
				}
			}
		}
		return list;
	}  
	
public:
	std::vector<std::string> seating (std::vector<std::string> attendies)
	{
		// Allocating memory
		std::vector<std::string> girls;
		std::vector<std::string> boys;
		int numberOfPeople = attendies.size();
		int numberOfGirls, numberOfBoys, i, boyIterator, girlIterator;
		std::vector<std::string> result;

		// If this is odd, theres no point doing anything else.
		if(numberOfPeople%2 ==1)
		{
			return {};
		}

		// Separating boys and girls.
		for (i = 0; i < numberOfPeople; i++)
		{
			int length = (attendies.at(i)).size();
			if(attendies[i].substr(length-3) == "boy")
			{
				boys.push_back(attendies[i].substr(0,length-4));
			}
			else if (attendies[i].substr(length-4) == "girl")
			{
				girls.push_back(attendies[i].substr(0,length-5));
			}
		}

		// Checking if same amount of boys and girls as well as even amount of pairs.
		numberOfGirls = girls.size();
		numberOfBoys = boys.size();
		if(numberOfGirls != numberOfBoys || numberOfGirls%2 == 1)
		{
			return {};
		}
		// Sorting alphabetically.
		girls = bubbleSort(girls);
		boys = bubbleSort(boys);

		// Adding host and hostess using new array.
		girlIterator = 0;
		boyIterator = 0;
		for(i = 0; i< numberOfPeople + 2; i++){
			if (i == 0)
			{
				result.push_back("HOST");
			} 
			else if (i == int(numberOfPeople/2 + 1))
			{
				result.push_back("HOSTESS");
			} 
			else if (i%2 == 0)
			{
				result.push_back(boys.at(boyIterator));
				boyIterator++;
			} 
			else if (i%2 == 1)
			{
				result.push_back(girls.at(girlIterator));
				girlIterator++;
			}
		}
		return result;
	}
};