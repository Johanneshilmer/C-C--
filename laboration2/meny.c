#include <stdio.h>

int main(void) {

  int choice;
  float value;

  do {
    printf("1: Meter till centimeter\n");
    printf("2: KM till Mil\n");
    printf("3: Avsluta\n");
    printf("Val: ");
    scanf("%d", &choice);
  
    switch (choice) {
      case 1:
        printf("Ange meter: ");
        scanf("%f", &value);
        printf("%.2f meter = %.2f cm\n", value, value * 100);
        break;
      case 2:
        printf("Ange KM: ");
        scanf("%f", &value);
        printf("%.2f KM = %.2f Mil\n", value, value / 10);
        break;
      case 3:
        printf("Exit");
        break;
    }
  } while (choice != 3);
  return 0;
}