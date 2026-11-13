#include <iostream>
#include <string>

class Sensor {
  protected:
    std::string namn;
    double varde;

  public:

    Sensor(std::string namn, double varde) : namn(namn), varde(varde) {}

    // Getter för namn
    std::string getName() const {
      return namn;
    }

    // Getter för varde
    double getVarde() const {
       return varde;
    }

    //Skriv ut
    void skrivUt() const {
      std::cout << "Namn: " << namn << "\n";
      std::cout << "Varde: " << varde << "\n";
    }
};

// Subklass

class TemperaturSensor : public Sensor {
  private:
    double larmgrans;

  public:
    TemperaturSensor(std::string namn, double varde, double startLarmgrans)
        : Sensor(namn, varde), larmgrans(startLarmgrans) {}

    double getLarmgrans() const {
      return larmgrans;
    }

    bool larm() const {
      return varde > larmgrans;
    }
};


int main(void) {

  TemperaturSensor sensor1("Ugn", 250.0, 200.0);
  TemperaturSensor sensor2("Rum", 22.0, 30.0);

  sensor1.skrivUt();
  std::cout << "Larm: " << sensor1.larm() << "\n\n";

  sensor2.skrivUt();
  std::cout << "Larm: " << sensor2.larm() << "\n";


  return 0;
}