#include <stdio.h>
int main(){
    double num1, num2, num3;
    printf("Enter number 1 : \n");
    scanf("%lf", &num1);

    printf("Enter number 2 : \n");
    scanf("%lf", &num2);

    printf("Enter number 3 :\n");
    scanf("%lf", &num3);

    printf("The average of these 3 numbers is : %lf ", (num1 + num2 + num3)/3);
    return 0;
}