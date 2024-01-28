#include <climits>
#include <iostream>
#include <string>
#include <vector>

class DownloadingFiles{

	public:
		double actualTime(std::vector<std::string> tasks){
			
			std::vector<int> speedVec;
			std::vector<double> timeVec;
			splitInput(tasks,timeVec,speedVec);

			double time = 0;

			while(speedVec.size()>0){

				int minPosition = findMinIndex(timeVec);
				time += timeVec.at(minPosition);
				download(timeVec,timeVec.at(minPosition));
				update(timeVec, speedVec);
			}

			return time;
		}

	private:

		// splits the input into two vectors
		void splitInput(std::vector<std::string> input, std::vector<double>& timeVec, std::vector<int>& speedVec){

			speedVec.resize(input.size());
			timeVec.resize(input.size());

			for(unsigned int i=0;i<input.size();i++){

				std::string currentInput = input.at(i);
				std::size_t spacePosition = currentInput.find(" ");

				speedVec[i] = std::stoi(currentInput.substr(0,spacePosition));
				timeVec[i] = std::stoi(currentInput.substr(spacePosition+1));

			}
		}

		// finds the index with the smallest amount
		double findMinIndex(std::vector<double> input){

			double min = INT_MAX;
			int index = -1;

			for(unsigned int i=0;i<input.size();i++){
				if(input.at(i) < min){
					min = input.at(i);
					index = i;
				}
			}

			return index;
		}

		// executes the download (substracts time)
		void download(std::vector<double>& input, double amount){

			for(unsigned int i=0;i<input.size();i++){
				input[i] -= amount;
			}
		}

		void update(std::vector<double>& timeVec, std::vector<int>& speedVec){

			for(unsigned int i=0; i<timeVec.size();i++){

				// std::cout<< "Size " << timeVec.size() <<std::endl;

				if(timeVec.at(i)==0){
					if(timeVec.size()!=1){

						int updatedNode;
						double oldSpeed;

						if(i!=0){
							updatedNode = i-1;
							oldSpeed = speedVec[updatedNode];
							speedVec[updatedNode] += speedVec[i];

						}
						else{
							updatedNode = i+1;
							oldSpeed = speedVec[updatedNode];
							speedVec[updatedNode] += speedVec[i];
						}

						timeVec[updatedNode] = (double)timeVec[updatedNode] * ((double)oldSpeed/(double)speedVec[updatedNode]);						
					}

					speedVec.erase(speedVec.begin()+i);
					timeVec.erase(timeVec.begin()+i);
				}

			}
		}

		// for debugging, will leave it here in case you want to see it
		void printVector(std::vector<int> input){
			for(unsigned int i=0;i<input.size();i++){
				std::cout << input.at(i) << std::endl;
			}
		}

		void printDoubleVector(std::vector<double> input){
			for(unsigned int i=0;i<input.size();i++){
				std::cout << input.at(i) << std::endl;
			}
		}
};