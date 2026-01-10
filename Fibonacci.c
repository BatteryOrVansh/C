// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int t1 = 0;
    int t2 = 1;
    int next;
    
    printf("Enter the length of your Fibonacci Series: ");
    scanf("%d", &n);
    printf("<-- Generating the Fibonacci Series of length %d -->\n", n);
    
    for (int i=1; i<=n; i++) {
         printf("%d \n", t1);
         
         next = t1+t2;
         
         t1 = t2;
         t2 = next;
    }
    
    return 0;
}