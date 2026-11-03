#include <iostream>

class Sensor {
  public:
    int id;
    double value;
    std::string name;

  void print() {
    std::cout << "Value : " << value << "\n";
    std::cout << "ID : " << id << "\n";
    std::cout << "Name : " << name << "\n";
  }
};

int main(void) {
  Sensor s1;
  s1.id = 2;
  s1.value = 20.4;
  s1.name = "namn";

  s1.print();

  return 0;
}