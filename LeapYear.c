#include <stdio.h>

int main() {
    int year;
    
    printf("Which year do you think is a leap year? : ");
    scanf("%d", &year);
    
    if (year%4==0) {
        if (year%100==0 && year%400==0) {
            printf("%d is a Leap Year", year);
        }
        else if (year%100==0 && year%400!=0) {
            printf("%d is not a Leap Year", year);
        }
        else {
            printf("%d is a Leap Year", year);
        }
    }
    else {
        printf("%d is not a Leap Year", year);
    }
   
    return 0;
}