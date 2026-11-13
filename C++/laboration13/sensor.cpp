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



int main(void) {

  Sensor temp("LineOne", 10.4);

  temp.skrivUt();


  return 0;
}