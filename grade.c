# include<stdio.h>

/*Grades for
  marks < 30 is C
  30 <= marks <70 is B
  70 <= marks <90 is A
  90 <= marks <= 100 is A+*/

int main() {

    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("Grade = C");
    } else if (marks >= 30 && marks <70) {
        printf("Grade = B");
    } else if (marks >= 70 && marks < 90) {
        printf("Grade = A");
    } else if (marks >= 90 && marks<=100){
        printf("Grade = A+");
    } else {
        printf("WRONG MARKS!");
    }

    return 0;

}