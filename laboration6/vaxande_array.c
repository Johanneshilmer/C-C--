
#include <stdio.h>
#include <stdlib.h>

int *read_all_readings(int *out_count) {
    int capacity = 4;
    int count = 0;

    int *readings = malloc(capacity * sizeof(*readings));

    if (readings == NULL) {
        printf("Memory allocation failed.\n");
        *out_count = 0;
        return NULL;
    }

    int value;

    while (1) {
        printf("Enter a reading (-1 to stop): ");

        if (scanf("%d", &value) != 1) {
            break;
        }

        if (value == -1) {
            break;
        }

        if (count == capacity) {
            int new_capacity = capacity * 2;

            int *temp = realloc(
                readings,
                new_capacity * sizeof(*readings)
            );

            if (temp == NULL) {
                printf("Memory reallocation failed.\n");
                free(readings);
                *out_count = 0;
                return NULL;
            }

            readings = temp;
            capacity = new_capacity;
        }

        readings[count] = value;
        count++;
    }

    *out_count = count;
    return readings;
}

int main(void) {
    int count;
    int *readings = read_all_readings(&count);

    if (readings == NULL) {
        return 1;
    }

    if (count == 0) {
        printf("No readings entered.\n");
    } else {
        int min = readings[0];
        int max = readings[0];

        printf("Readings: ");

        for (int i = 0; i < count; i++) {
            printf("%d ", readings[i]);

            if (readings[i] < min) {
                min = readings[i];
            }

            if (readings[i] > max) {
                max = readings[i];
            }
        }

        printf("\nMinimum: %d\n", min);
        printf("Maximum: %d\n", max);
    }

    free(readings);
    readings = NULL;

    return 0;
}
