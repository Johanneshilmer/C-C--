#include <iostream>

int main(void) {
    int arr[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        std::cout << "Enter a value: ";
        std::cin >> arr[i];
        sum += arr[i];
    }
    int low = arr[0];
    int high = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < low) {
            low = arr[i];
        }

        if (arr[i] > high) {
            high = arr[i];
        }
    }

    double medel = (double)sum / 5;

    std::cout << "The highest value : " << high << "\n"
                << "The lowest value : " << low << "\n"
                << "The mid : " << medel << "\n";
    return 0;
}