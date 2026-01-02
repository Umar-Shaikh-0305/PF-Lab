#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating number: ");
    scanf("%f", &num);

    printf("Number with 2 decimal places: %.2f\n", num);

    printf("Number with 6 decimal places: %.6f\n", num);

    return 0;
}

