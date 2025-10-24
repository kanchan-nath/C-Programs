/*
Ques: Count the number of elements in given array greater than a given number x. let input from user.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter No. Of Elements in Array: ");
    scanf("%d", &n);
    int arr[n];
    int x;
    int count = 0;
    printf("Enter Value of X:");
    scanf("%d", &x);
    printf("Enter Your Array Elements:");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (x < arr[j])
            count += 1;
    }
    printf("the number of elements in given array greater than a given number %d are %d", x, count);
    return 0;
}