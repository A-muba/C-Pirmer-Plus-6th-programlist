# include <stdio.h>

int main(){
    // Program list 6.9
    printf("Program 6.9:\n");
    long num, sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1);

    while (input_is_good){
        sum = sum+num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    } 
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}