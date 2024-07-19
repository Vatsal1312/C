# include<stdio.h>
//for true -> 1
//for false-> 0
int main() {
    int x;
    
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x%5 == 0);
    
    return 0;
}