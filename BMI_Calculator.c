#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;
    
    printf("Enter your weight in kilogram: ");
    scanf("%f", &weight );
    printf("Enter your height in meters: ");
    scanf("%f", &height );
    
    bmi = weight/(height * height);
    
    if (bmi<18.5) {
        printf("Your BMI is %.2f and you are Underweight", bmi);
    }
    else if (bmi>=18.5 && bmi<=24.9) {
        printf("Your BMI is %.2f and you are Normal Weight", bmi);
    }
    else if (bmi>=25 && bmi<=29.9) {
        printf("Your BMI is %.2f and you are Overweight", bmi);
    }
    else {
        printf("Your BMI is %.2f and you are Obese", bmi);
    }
    
    return 0;
}