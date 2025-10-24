/*
Given an array arr[] and an integer target, We need to find all distinct pairs in the array such that their sum equals target.

Examples:

Input: arr[] = [1, 5, 7, -1, 5], target= 6
Output: [[1, 5], [-1, 7]]
Explanation: There are only two pairs that add up to 6: [1, 5]and [-1, 7].

Input: arr[] = [1, 9, -1, 8, 6], target = 4
Output: []
Explanation: No pairs add up to 4.
*/
#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 7, -1, 5};
    int targetVal = 6; // 7, -1 | 5,1 | 1,5 => 3 Pairs;
    int pairs = 0;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] + arr[j] == targetVal)
            {
                pairs += 1;
            }
        }
    }
    printf("The No. of Pairs are: %d", pairs);
}