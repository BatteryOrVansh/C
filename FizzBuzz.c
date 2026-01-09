
#include <stdio.h>

int main() {
    int num;
    printf("Enter the max int of the range to identify FizzBuzz ");
    scanf("%d", &num );
    printf("IDENTIFYING FIZZBUZZ TILL %d\n", num);
    
    for (int i = 1; i<=num; i++) {
        if (i%3==0 && i%5==0) {
            printf("FizzBuzz \n");
        }
        else if (i%3==0) {
            printf("Fizz \n");
        }
        else if (i%5==0) {
            printf("Buzz \n");
        }
        else {
            printf("%d \n", i);
        }
    }
    
    return 0;
}    