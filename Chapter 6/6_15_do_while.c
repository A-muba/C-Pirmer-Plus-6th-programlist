# include <stdio.h>

int main(){
    // Program list 6.15
    printf("Program list 6.15:\n");
    const int secret_code = 13;
    int code_entered;
    
    do{
        printf("To enter the tiasdaldaldbkvas therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");

    return 0;
}