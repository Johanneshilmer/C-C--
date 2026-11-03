#include <iostream>
#include <string>

class Bil {
public:
    std::string marke;
    int hastighet;

    // Konstruktor
    Bil(std::string m, int h) : marke(m), hastighet(h) {
        std::cout << "Bilen skapades!\n";
    }

    // Destruktor
    ~Bil() {
        std::cout << "Bilen forstordes!\n";
    }
};

int main() {
    Bil bil1("Volvo", 20);

    std::cout << "Bilen ar av market " << bil1.marke << "\n";

    return 0;
}