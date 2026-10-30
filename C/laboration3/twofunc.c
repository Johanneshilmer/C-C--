#include <stdio.h>

double celsius_to_kelvin(double celsius) {
  return celsius = celsius + 273.15;
}

void print_temperature(double celsius, double kelvin) {
  printf("Here is celsius: %lf", celsius);
  printf("Here is kelvin %lf", kelvin);
}

int main(void) {
  double user_input = 0.0;

  printf("Enter a temp: ");
  scanf("%lf", &user_input);

  double celsius = celsius_to_kelvin(user_input);
  print_temperature(celsius, user_input);

  return 0;
}