#include <stdio.h>

int main() {
    int originalNum;
    
    printf("<--Armstrong Number of order 3-->\n");
    printf(" | 153 | 370 | 371 | 407 | --> are the only armstrong num of order 3\n");
    
    printf("Enter the num you want to test: ");
    scanf("%d", &originalNum );
    printf("%d is your number...\n", originalNum);
    
    int temp = originalNum;
    int sum = 0;
    int rem;
    
    while (temp!=0) {
        rem = temp%10; //peeler (%10): gives last digit
        
        sum += (rem*rem*rem);
        
        temp /= 10; //chopper (/10): chops last digit
        
    }
    
    if (sum == originalNum) {
        printf("%d is Armstrong of order 3", originalNum);
    }
    else {
        printf("%d is not Armstrong of order 3", originalNum);
    }
   
    return 0;
}