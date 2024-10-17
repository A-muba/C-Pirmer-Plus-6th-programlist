# include <stdio.h>

int main(){
    // Program list 5.4
    printf("Program list 5.4:\n");
    int num = 1; 

    while (num < 21){
        printf("%4d %6d\n", num, num*num);
        num = num+1;
    }

    return 0; 
}