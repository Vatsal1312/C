#include<stdio.h>

int main() {

    int natural_number ;

    printf("Enter number : ");
    scanf("%d" , &natural_number);

    if (natural_number>0 ){
        printf("%d is a natural number", natural_number);
    } else {
        printf("%d is not a natural number",natural_number);
    }

    return 0;
}