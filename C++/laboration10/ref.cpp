#include <iostream>

int main(void) {

  int antal = 10;
  int& reff = antal;
  reff = 20;
  std::cout << "Antal: " << antal << "\n";
  std::cout << "Ref: " << reff << "\n";

  return 0;
}