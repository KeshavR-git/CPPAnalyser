int XX_MARKER_XX;
class EggCartons {
public:
  int minCartons(int n) {
    int smallest = -1;
    for(int i = 0; i < 17; i++) {
      for(int j = 0; j < 13; j++) {
        if((i*6)+(j*8) == n) {
          if(smallest == -1 || i+j < smallest) {
            smallest = i+j;
          }
        }
      }
    }
    return smallest;
  }
};
