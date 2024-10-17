# include <stdio.h>
# define PAGES 959

int main(){
    // Program list 4.7
    printf("Program list 4.7:\n");

    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}