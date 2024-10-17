# include <stdio.h>
# define PRAISE "You are an extraordinary being."

int main(void){
    // Program list 4.2
    printf("Program list 4.2:\n");
    char name[40];

    printf("what's your name? ");
    scanf("%s", name); // input a word(without space)
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}