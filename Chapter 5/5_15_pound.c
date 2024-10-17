# include <stdio.h>

void pound (int n);

int main(){
    // Program list 5.15
    printf("Program list 5.15:\n");
    int times = 5;
    char ch = '!';
    float f = 6.0f;

    pound(times); 
    pound(ch);  // pound(int(ch))
    pound(f);   // pound(int(f))

    return 0;
}

void pound(int n){
    while (n-- > 0)
        printf("#");
    printf("\n");
}