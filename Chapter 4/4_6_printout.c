# include <stdio.h>
# define PI 3.141593

int main(){
    // Program list 4.6
    printf("Program list 4.6:\n");
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou are too dear for my possessing,\n");
    printf("%c%d\n", '$', 2*cost);

    return 0;
}
