#include <iostream>

class Djur {
  public:
    void ata() {
      std::cout << "Djuret ater\n";
    }
};

class Hund : public Djur {
  public:
    void skalla() {
      std::cout << "Voff!\n";
    }
};

int main(void) {

  Hund hund;

  hund.ata();
  hund.skalla();

  return 0;
}