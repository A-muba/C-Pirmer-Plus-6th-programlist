# include <stdio.h>

int main(){
    // Program list 5.10
    printf("Program list 5.10:\n");
    int ultra=0, super=0;

    while (super < 5){
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }

    return 0;
}