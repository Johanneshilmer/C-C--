#include <iostream>
#include <string>


class Bil {
  public:
    std::string marke;
    int hastighet = 0;

    void accelerera() {
      hastighet += 10;
    }

    void visaHastighet() {
      std::cout << hastighet << "\n";
    }
};

int main(void) {

  Bil bil1;

  bil1.marke = "Volvo";
  bil1.hastighet = 20;

  bil1.accelerera();
  bil1.visaHastighet();

  return 0;
}