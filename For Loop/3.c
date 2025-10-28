/*
3. Display n Terms of Natural Numbers and Their Sum

Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Sum of How Much Natural Number:\n");
    scanf("%d", &n); // Already done in previous video
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    int sum = (((n * (n + 1)) / 2));
    printf("\n");

    printf("The sum of %d natural numbers is: %d", n, sum);
}