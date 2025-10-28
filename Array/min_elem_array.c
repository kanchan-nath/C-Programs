/*
Ques : Find the minimum value out of all the elements in the array.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Array Size:");
    scanf("%d", &n);
    int arr[n];
    int min_Elem = arr[0];
    printf("Enter Array Elment:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (min_Elem > arr[j])
        {
            min_Elem = arr[j];
        }
    }

    printf("Min Array  Elemnt: %d", min_Elem);
}