// b. Write a program to check if given character is digit or not

#include <stdio.h>
int main(){
    char c;
    printf("Enter the character : \n");
    scanf("%c", &c );
    printf("%d", c>=48 && c<= 57);
    printf("\nIf it is 0 then it is not a digit and if it is 1 then it is a digit.");
    return 0;
}