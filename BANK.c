/*
Name;Lydia Resiato
Reg;CT100/G/26275/25
descrption;checking eligibility for a bank loan

*\

#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%lf", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
     else {age <=21 && income <=21000);
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    

    return 0;
}
