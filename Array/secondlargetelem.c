/*
Second Largest Element in an Array
Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.


Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 there is no second largest element.
*/

#include <stdio.h>
// #include<limits.h>
int main()
{
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int maxValue = arr[0];
    int smaxValue = -1;
    for (int i = 0; i <= 5; i++)
    {

        if (maxValue < arr[i])
        {
            maxValue = arr[i];
        }
        
    }
    for(int j=0; j<=5; j++)
   if(smaxValue <arr[j] && arr[j] < maxValue){
    smaxValue = arr[j];
   }
   if (smaxValue == -1)
       printf("-1");
    else{
        printf("%d", smaxValue);
    }
    return 0;
}