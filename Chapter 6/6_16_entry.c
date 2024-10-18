# include <stdio.h>

int main(){
    // Program list 6.16
    printf("Program list 6.16:\n");
    const int secret_code = 13;
    int code_entered;

    printf("To enter the sadjaldaddasdabdkajgd therapy club, \n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code){
        printf("To enter the sdadfas therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");

    return 0;
}