# include <stdio.h>

int main(){
    // Program list 6.4
    printf("Program list 6.4;\n");
    int n = 0;

    while(n++<3);   // There is ";" here
        printf("n is %d\n", n);
    printf("That's all this program does\n");

    return 0;
}