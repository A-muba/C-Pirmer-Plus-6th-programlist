# include <stdio.h>

void butler(void);

int main(void){
    // Program list 2.3
    printf("Program list 2.3:\n");

    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void){
    printf("You rang, sir?\n");
}