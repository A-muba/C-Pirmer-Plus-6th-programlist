# include <stdio.h>

int main(){
    // Program list 5.3
    printf("Program list:\n");
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                   cheeta tarzan   jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}