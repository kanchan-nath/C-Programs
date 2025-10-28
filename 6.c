/*
6. Multiplication Table for a Given Integer

Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include<stdio.h>
int main(){
    int mult;
    int n;
    printf("Sum of How Much Natural Number:\n");
    scanf("%d", &n); // Already done in previous video
    for(int i=1;i<=n;i++){
        mult = (n*i); 
        printf("%d x %d = %d\n", n, i, mult);
    }
    return 0;
}