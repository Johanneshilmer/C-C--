#include <iostream>

class Sensor {
  public:
    int id;
    double hamta_varde() {
      return varde;
    }

    void satt_varde(double nytt_varde) {
      if(nytt_varde >= 0) {
        varde = nytt_varde;
      }
    }

    private:
      double varde;
};

int main(void) {

  Sensor s1 = {2};

  return 0;
}