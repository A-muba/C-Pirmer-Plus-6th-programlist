# include <stdio.h>

int main(void){
    // Program 3.1
    printf("Program 3.1:\n");
    float weight, value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);
    value = 1700.00*weight*14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum price drop, \n");
    printf("eat more to maintain your value.\n");

    return 0;
}