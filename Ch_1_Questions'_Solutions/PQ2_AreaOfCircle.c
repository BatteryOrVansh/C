    #include <stdio.h>
    
    int main(){
        double radius;
        printf("Enter the radius of the circle: \n");
        scanf("%lf", &radius); // to read a double in scanf --> %lf 
        printf("The area of the circle is : %.2lf", 3.141592*radius*radius); // here as well for the output --> %lf used t
       
        return 0;
    }