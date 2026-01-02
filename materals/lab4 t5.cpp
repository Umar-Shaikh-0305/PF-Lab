#include <stdio.h>

int main() {
    float weight;
    int cost;

    printf("Enter the weight (kg): ");
    scanf("%f", &weight);


    if (weight <= 5) {
        cost = 10;
    }
    else if (weight <= 10) {
        cost = 20;
    }
    else {
        cost = 30;
    }

    printf("The shipping cost for %.2f kg is: %d", weight, cost);

    return 0;
}

