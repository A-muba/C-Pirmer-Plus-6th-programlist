# include <stdio.h>
# include <math.h>

int main(){
    // Program list 6.5
    printf("Program list 6.5:\n");
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    while (fabs(response-ANSWER)>0.0001){  // fabs() --> float type absolute value
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}