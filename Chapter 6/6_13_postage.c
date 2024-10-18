# include <stdio.h>

int main(){
    // Program list 6.13
    printf("Program list 6.13:\n");
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf(" ounces cost\n");

    for(ounces=1, cost=FIRST_OZ; ounces<=16; ounces++, cost+=NEXT_OZ)
        printf("%5d $%4.2f\n", ounces, cost/100.0);

    return 0;
}