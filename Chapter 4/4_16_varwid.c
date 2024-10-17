# include <stdio.h>

int main(){
    // Program list 4.16
    printf("Program 4.16:\n");
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number); // similar to '%2d' or '%3d' etc.
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight); // simliar to '%5.2f' or '%7.3f' etc.
    printf("Done!\n");

    return 0;
}