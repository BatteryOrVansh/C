// WAP to check if the number is divsible by 2 or not

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    printf("%d", num%2==0);
    printf("\nIf it's 1 then it is divisible and if it is 0 then it is not.");
    return 0;
}