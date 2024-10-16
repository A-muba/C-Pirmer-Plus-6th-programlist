# include <stdio.h>

int main(){
    // Program list 3.7
    printf("Program list 3.7:\n");
    float aboat = 32000.0;
    double abet = 2.14e9;
    double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    printf("and it's %a in hexdecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%lf can be written %le\n", dip, dip);

    return 0;
}