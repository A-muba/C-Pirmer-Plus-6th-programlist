# include <stdio.h>

int main(){
    //Program list 6.1
    printf("Program list 6.1:\n");
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

    while (status == 1){
        sum = sum+num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Thse integers sum to %ld.\n", sum);

    return 0;
}