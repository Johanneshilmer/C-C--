#include <stdio.h>

#include "tools.h"

static void skriv_meny(void)
{
    printf("\n=== Gruppens verktygslada ===\n");
    printf("1. Temperaturkonvertering (Celsius -> Fahrenheit)\n");
    printf("2. Rektangelns area\n");
    printf("0. Avsluta\n");
    printf("Val: ");
}

int main(void)
{
    int val;

    do
    {
        skriv_meny();
        scanf("%d", &val);

        switch (val)
        {
        case 1:
        {
            double celsius;

            printf("Ange temperatur i Celsius: ");
            scanf("%lf", &celsius);
            printf("%.2f C = %.2f F\n",
                   celsius, celsius_till_fahrenheit(celsius));
            break;
        }
        case 2:
        {
            double bredd, hojd;

            printf("Ange bredd och hojd: ");
            scanf("%lf %lf", &bredd, &hojd);
            printf("Arean ar %.2f\n", area(bredd, hojd));
            break;
        }
        case 0:
            printf("Avslutar.\n");
            break;
        default:
            printf("Ogiltigt val, forsok igen.\n");
        }
    } while (val != 0);

    return 0;
}
