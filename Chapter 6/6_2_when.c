# include <stdio.h>

int main(){
    // Program list 6.2
    printf("Program list 6.2:\n");
    int n = 5;

    while (n<7){
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}