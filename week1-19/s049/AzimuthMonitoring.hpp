#include <string>
#include <vector>
#ifndef AzimuthMonitoring_hpp
#define AzimuthMonitoring_hpp

class AzimuthMonitoring{
    public:
        int getAzimuth(std::vector<std::string> instructions){
            int n = instructions.size();
            int azimuth = 0;

            for(int i = 0; i<n; i++){
                switch(instructions.at(i)[0]){
                    case 'H':
                        i=n;
                        break;
                    case 'L':
                        if(instructions.at(i).length()>4){
                            azimuth-=std::stoi(instructions.at(i).substr(5));
                        } else {
                            azimuth-=90;
                        }
                        break;
                    case 'R':
                        if(instructions.at(i).length()>5){
                            azimuth+=std::stoi(instructions.at(i).substr(6));
                        } else {
                            azimuth+=90;
                        }
                        break;
                    case 'T':
                        azimuth+=180;
                        break;
                }
            }
            azimuth=azimuth%360;
            if(azimuth<0){
                azimuth=360+azimuth;
            }
            return azimuth;
        }
};
#endif