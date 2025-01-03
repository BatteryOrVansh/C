// c. Write a program to print the smallest number of two
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter first num : \n");
    scanf("%d", &num1);

    printf("Enter second number : \n");
    scanf("%d", &num2);

    // i call this: toggle search
    int ch = (num1 < num2); // ch gets the return value of 1 or 0 based on the result
    int ch2 = (num2 < num1); // same for this
    // so between ch and ch2, only either one can be true or false

    // got this idea from chatgpt
    printf("%d is the smallest number.", ch * num1 + ch2 * num2);

    return 0;

}