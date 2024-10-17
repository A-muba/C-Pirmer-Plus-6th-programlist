# include <stdio.h>
# define PI 3.14

int main(){
    // Program list 4.4
    printf("Program list 4.4:\n");
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI*radius*radius;
    circum = 2*PI*radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}