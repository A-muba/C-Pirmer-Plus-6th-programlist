# include <stdio.h>

int main(){
    // Program list 5.13
    printf("Program list 5.13:\n");
    int count, sum;
    
    count = 0;
    sum = 0;
    while (count++<20)
        sum = sum+count;
    printf("sum = %d\n", sum);

    return 0;
}