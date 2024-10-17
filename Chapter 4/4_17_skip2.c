# include <stdio.h>

int main(){
    // Program list 4.17
    printf("Program list 4.17:\n");
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);    // Different with 'printf()', 'scanf(%*d)' means SKIP integer position
    printf("The last integer was %d\n", n);

    return 0;
}