#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int XX_MARKER_XX;
 
 
class   AzimuthMonitoring
{
  public:
  int getAzimuth(vector<string> instructions)
  {
      int res = 0;
      for(int i=0; i<instructions.size(); i++)
      {
        string str = instructions[i];
        string ins;
        int degree = 0;
        if(str =="HALT"){break;}
        if(str=="LEFT"){res-=90;}
        if(str=="RIGHT"){res+=90;}
        if(str=="TURN AROUND"){res+=180;}
        if(str.size()>4 && str.substr(0,4)=="LEFT")
        {
          istringstream in(str);
          in>>ins>>degree;
          res-=degree;
        }
        if(str.size()>5 && str.substr(0,5)=="RIGHT")
        {
          istringstream in(str);
          in>>ins>>degree;
          res += degree;
        }
      }
      res %= 360;
      if(res<0)
      {
        res += 360;
      }
      return res;
  }
};