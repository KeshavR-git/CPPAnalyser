#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring
{
  public:
    int getAzimuth(vector<string> instructions)
    {
      int azimuth = 0;
      for ( int i=0; i<instructions.size(); i++ )
      {
        // if "halt"
        if ( instructions[i] == "HALT" ){
          break;
        }
        // if "turn around"
        else if ( instructions[i] == "TURN AROUND" ){
          azimuth = (azimuth + 180) % 360;
        }
        // if "left..."
        else if ( instructions[i][0] == 'L' ){
          // if X degrees is declared
          if ( instructions[i].length() > 4 ){
            string strDegrees = instructions[i].substr(5,string::npos);
            int degrees = stoi(strDegrees);
            // move left by X degrees
            azimuth -= degrees;
            if ( azimuth < 0){
              azimuth = 360 + azimuth;
            }
          }
          // if no degree is declared
          else {
            azimuth -= 90;
            if ( azimuth < 0){
              azimuth = 360 + azimuth;
            }
          }
        }
        // if "right..."
        else {
          // if X degrees is declared
          if ( instructions[i].length() > 5 ){
            string strDegrees = instructions[i].substr(5,string::npos);
            int degrees = stoi(strDegrees);
            // move right by X degrees
            azimuth = (azimuth + degrees) % 360;
          }
          // if no degree is declared
          else {
            azimuth = (azimuth + 90) % 360;
          }
        }
      }
      return azimuth;
    }
};
