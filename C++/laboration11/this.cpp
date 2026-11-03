#include <iostream>
#include <string>

class Bil {
public:
    std::string marke;
    int hastighet;

    Bil(std::string marke, int hastighet) {
        this->marke = marke;
        this->hastighet = hastighet;
    }

    void visaInfo() {
        std::cout << "Marke: " << this->marke << "\n";
        std::cout << "Hastighet: " << this->hastighet << "\n";
    }
};

int main() {
    Bil bil1("Volvo", 100);

    bil1.visaInfo();

    return 0;
}