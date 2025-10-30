/*
Name:Bivon nyandiko
Reg no :PA106/G/28825/25
Description:
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");
    
    for (i = 0; i < 7; i++) {
        printf("Day %d: $", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("Total weekly revenue: $%.2f\n", total);
    printf("Average daily revenue: $%.2f\n", average);

    return 0;
}