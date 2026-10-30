#include <iostream>

int main(void) {

  int antal = 3;
  double pris = 10.90;

  std::cout << "Antal: " << antal  << "\n"; // Skriver ut
  std::cout << "Pris: " << pris << "\n"; // Skriver ut

  return 0;
}
/*
 kompilera C++
 g++ -Wall -Wextra -Wpedantic -std=c++20 main.cpp -o test
*/
