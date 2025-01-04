//  Write a function to find square root of a number.

#include <stdio.h>

int sqrRoot(int n);

int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square root of %d is %d\n", n, sqrRoot(n));
    return 0;
    
}

int sqrRoot(int n) {
    return n*n;
}