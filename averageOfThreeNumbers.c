#include<stdio.h>

//code for finding average of three numbers

int main() {
    float a, b, c ;

    printf("Enter first number : ");
    scanf("%f" , &a );

    printf("Entre second number : ");
    scanf("%f", &b);

    printf("Entre third number : ");
    scanf("%f", &c);

    printf("Average of numbers = %f" , (a + b + c)/3);

    return 0;


}