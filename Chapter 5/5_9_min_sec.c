# include <stdio.h>
# define SEC_PER_MIN 60

int main(){
    // Program list 5.9
    printf("Program list 5.9:\n");
    int sec, min, left;

    printf("Convert seconds to minutes abd seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);

    while(sec>0){
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}