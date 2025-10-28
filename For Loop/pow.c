/*
2. Sum of First 10 Natural Numbers

Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
// Using Pow Function
// 1^1 + 2^1+ 3^1+  4^1+ 5^1+ 6^1+ 7^1+ 8^1+ 9^1
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Sum of How Much Natural Number:\n");
    scanf("%d", &n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += (int)pow(i,1); // pow(i,1) => i^1
    }
    printf("The sum of %d natural number is:\n");
    printf("%d", sum);
}