# include <stdio.h>

int main(){
    // Program list 6.12
    printf("Program list 6.12:\n");
    int num;

    printf("    n n cubed\n");
    for (num=1; num<=6; num++)
        printf("%5d %5d\n", num, num*num*num);

    return 0;
}