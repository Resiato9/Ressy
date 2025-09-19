//simple C program 
/*
Name:Lydia Resiato 
Reg:CT100/G/26275/25
Description:hello c
*/

#include<stdio.h>//pre-proccessor 

int main() {
    float height, weight;
    char phone[20];  // store phone number as string (to allow leading zeros, +, etc.)

    
    printf("Enter your height (in cm): ");
    scanf("%f, 112");

    
    printf("Enter your phone number: ");
    scanf("%s, 0790986567"); 

    
    printf("Enter your weight (in kg): ");
    scanf("%f, 58");

    // Display the information
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %s\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}
