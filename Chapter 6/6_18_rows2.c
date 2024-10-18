# include <stdio.h>

int main(){
    // Program list 6.18
    printf("Program list 6.18:\n");
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row=0; row<ROWS; row++){
        for (ch=('A'+row); ch<('A'+CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}