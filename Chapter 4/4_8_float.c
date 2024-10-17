# include <stdio.h>

int main(){
    // Program list 4.8
    printf("Program list 4.8:\n");
    const double RENT = 3852.99;
    const double MIN_RENT = -3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT); 
    printf("*%-10.3f*\n", RENT); // -: align left
    printf("*%10.3E*\n", RENT);
    
    printf("*%+4.2f*\n", RENT); // +: add + or -
    printf("*%+4.2f*\n", MIN_RENT); // +: add + or -
    printf("*%010.2f*\n", RENT);
    /*
    0: Indicates that 0 is used to fill the left empty position of the output.
    10: Indicates that the total width of the output is 10 characters.
    */

    return 0;
}