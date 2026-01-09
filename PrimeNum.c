#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int num;
    bool isPrime = true;
    
    printf("Enter a num to check if it is prime : ");
    scanf("%d", &num);
    
    if (num <= 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d is Prime", num);
    }
    else {
        printf("%d is not Prime", num);
    }
    
    return 0;
}