# include<stdio.h>

int countOdd(int arr[], int n){
    int count = 0;
    for (int i =0; i<n; i++) {
        if (arr[i] % 2 != 0) {
            count++;            
        }
    }

    return count;
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++) {
        int firstval= arr[i];
        int secondval= arr[n-i-1];
        arr[i]= secondval;
        arr[n-i-1] = firstval;
    }
}
int main() {

    int arr [] = {1, 2, 3, 4, 5};
    printf("%d\n", countOdd(arr, 5));
    reverse(arr, 5);
    printArr(arr, 5);    
    return 0;
}
    