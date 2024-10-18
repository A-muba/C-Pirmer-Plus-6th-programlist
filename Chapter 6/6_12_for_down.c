# include <stdio.h>

int main(){
    // Program list 6.12_continue
    int secs;

    for (secs=5; secs>0; secs--)
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");

    return 0;
}