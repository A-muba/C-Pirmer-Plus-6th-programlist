# include <stdio.h>

int main(){
    // Program list 3.3
    printf("Program 3.3:\n");
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}