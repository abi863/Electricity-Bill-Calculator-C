
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = (100 * 1.50) +
               (units - 100) * 2.50;
    } else if (units <= 300) {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (units - 200) * 4.00;
    } else {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (100 * 4.00) +
               (units - 300) * 6.00;
    }

    printf("Units consumed = %d\n", units);
    printf("Electricity bill = Rs. %.2f\n", bill);

    return 0;
}
