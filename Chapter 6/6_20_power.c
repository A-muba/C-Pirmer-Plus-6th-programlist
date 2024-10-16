# include <stdio.h>

double power(double n, int p);

int main(){
    // Program list 6.20
    printf("program list 6.20:\n");
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power to which\n");
    printf("the number will be raised. Enter q to quit.\n");

    while (scanf("%lf%d", &x, &exp)==2){
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p){
    double pow = 1;

    for (int i=1; i<=p; i++)
        pow *= n;

    return pow;
}