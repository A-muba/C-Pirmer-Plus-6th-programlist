# include <stdio.h>
# define BLURB "Authentic imitation"

int main(){
    // Program list 4.10
    printf("Program list 4.10:\n");

    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;
}