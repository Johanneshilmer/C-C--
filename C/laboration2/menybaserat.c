# include <stdio.h>

int main(void) {
  int choice;

  do {
    printf("1. Konvertera Celsius till Fahrenheit.\n");
    printf("2. Avgör om ett inmatat heltal är jämt eller udde.\n");
    printf("3. Avsluta\n");

    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Du valde 1\n.");
        break;
      case 2:
        printf("Du valde 2\n");
        break;
      case 3:
        printf("Du valde att avsluta programmet.\n");
        break;
    }
  }  while (choice != 3); // väljer användaren 3 så avslutas programmet

  return 0;
}