#include <iostream>
#include <string>

class Bil {
  public:
    std::string marke;
    int hastighet;

    /*
    Bil(std::string m, int h) {
      marke = m;
      hastighet = h;
    }
    */
   Bil(std::string m, int h): marke(m), hastighet(h) {} // Bättre sätt
};

int main(void) { 

  Bil bil1("Volvo", 0);

  std::cout << "Marke: " << bil1.marke << "\n";
  std::cout << "Hastighet: " << bil1.hastighet << "\n"; 

  return 0;}