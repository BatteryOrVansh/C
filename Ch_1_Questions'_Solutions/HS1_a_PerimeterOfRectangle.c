/* a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.  */

#include <stdio.h> 
int main(){
    float length, breadth;
    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%f", &breadth);
    printf("The perimeter of the rectangle is : %.2f", 2*(length+breadth));
    return 0;
}