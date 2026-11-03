#include <iostream>

class Sensor {
public:
  int id = 0;
  double varde = 0.0;

  void skrivUt() const {
    std::cout << "Sensor ID: " << id << ", Varde: " << varde << "\n";
  }
};

// Beraknar medelvardet av alla sensorer
double medelvarde(Sensor sensorer[], int antal) {
  double sum = 0.0;

  for (int i = 0; i < antal; i++) {
    sum += sensorer[i].varde;
  }

  return sum / antal;
}

// Kalibrerar en sensor genom en referens
void kalibrera(Sensor& sensor, double korrektion) {
  sensor.varde += korrektion;
}

int main() {

  Sensor sensorer[5];

  // Las in sensorvarden
  for (int i = 0; i < 5; i++) {
    std::cout << "Ange varde for sensor " << i << ": ";
    std::cin >> sensorer[i].varde;

    sensorer[i].id = i;
  }

  // Medelvarde fore kalibrering
  std::cout << "\nMedelvarde fore kalibrering: " << medelvarde(sensorer, 5) << "\n";

  // Kalibrera sensor nummer 2
  kalibrera(sensorer[2], -0.3);

  // Skriv ut alla sensorer
  std::cout << "\nEfter kalibrering:\n";

  for (int i = 0; i < 5; i++) {
    sensorer[i].skrivUt();
  }

  // Nytt medelvarde
  std::cout << "\nNytt medelvarde: " << medelvarde(sensorer, 5) << "\n";

  return 0;
}