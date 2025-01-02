/* b. Take a number(n) from user & output its cube(n*n*n).  */
#include <stdio.h>
#include <math.h>
int main(){
    float num;
    printf("Enter a number : \n");
    scanf("%f", &num);
    printf("The cube of the number is : %.2f", pow(num,3)); // power function comes with math.h ; pow(base, exponent    )
    return 0;
}