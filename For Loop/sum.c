/*
2. Sum of First 10 Natural Numbers

Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
#include<stdio.h>
int main(){
    int n;
    printf("Sum of How Much Natural Number:\n");
    scanf("%d", &n);
    int sum;
    sum = ((n*(n + 1))/2);
    printf("Sum of First %d Number is %d :\n", n, sum);
    return 0;
}