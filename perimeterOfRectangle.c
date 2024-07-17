# include<stdio.h>
//code for perimeter of rectangle

int main() {
    int a , b;
    
    printf("perimeter of rectangle \n");

    printf("enter length = ");
    scanf("%d", &a);

    printf("enter breath = ");
    scanf("%d", &b);

    printf("perimeter of rectangle = %d", 2*(a + b));
    return 0;
}