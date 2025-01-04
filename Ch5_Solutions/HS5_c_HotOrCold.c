// Write a Function to pritn "hot" or "cold" based on the temperature entered by the user.


#include <stdio.h>

void Temp(int n);

int main (){
    int n;
    printf("Enter the temperature: ");
    scanf("%d", &n);
    Temp(n);
    return 0;
    
}

void Temp(int n) {
    if (n > 25) {
      printf("hot");
    }else{
      printf("cold");
    }
    
}