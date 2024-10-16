# include <stdio.h>
# define SQUARES 64

int main(){
    // Program list 5.5
    printf("Program list 5.5:\n");
    const double CROP = 2E16; // Aunnal wheat production in he world
    double current, total;
    int count = 1;

    printf("square      grains      total     ");
    printf("fraction of \n");
    printf("            added       grains    ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    
    while(count < SQUARES){
        count = count+1;
        current =  2.0*current;
        total = total+current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    printf("That's all.\n");    

    return 0;
}