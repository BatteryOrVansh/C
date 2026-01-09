#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(int num);

int main() {
    int num1;
    int num2;
    
    printf("Enter a first num to check if it is prime : ");
    scanf("%d", &num1);
    printf("Enter a second num to check if it is prime : ");\
    scanf("%d", &num2);
    
    if (checkPrime(num1) && checkPrime(num2)) {
        if (num1+2==num2 || num1-2==num2) {
            printf("%d and %d are Twin Primes", num1, num2);
        }
        else {
           printf("Both are primes, but NOT Twin Primes");
        }
    }
    else {
        printf("Both are not Twin Primes");
    }
    
    return 0;
}

 bool checkPrime(int num) {
    if (num <= 1) {
        return false;
    }
    else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0){
                return false;
            }
        }
    }
    return true;
    
}