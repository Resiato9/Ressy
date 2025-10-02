/*
name;lydia resiato
reg;CT100/G/26275/25
description;water bill calculation
*/

#include<stdio.h>


int main() {
    int units;
    float bill = 0;

    // prompts the user to enter water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculating water units consumed
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + ((units - 30) * 25);
    } else {
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    // total output
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}