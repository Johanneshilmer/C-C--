#include <iostream>

class Sensor {
  protected:
    std::string name;
    double varde;

    public:
      Sensor(std::string name, double varde) : name(name), varde(varde) {}
};

class TemperaturSensor : public Sensor {
  public:
    TemperaturSensor(std::string name, double varde) : Sensor(name, varde) {
    }

    void skrivUt() {
      std::cout << name << ": " << varde << "\n";      
    }
};

int main(void) {

  TemperaturSensor temp("LineOne", 10.2);

  temp.skrivUt();

  return 0;
}