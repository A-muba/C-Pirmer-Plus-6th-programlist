# include <stdio.h>

int main(){
    // Program list 4.13
    printf("Program list 4.13:\n");
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    return 0;
}