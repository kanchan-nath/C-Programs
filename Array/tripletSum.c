/*
Given an array arr[] and an integer sum, check if there is a triplet in the array which sums up to the given target sum.

Examples:

Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true
Explanation: The triplet [1, 4, 8] sums up to 13

Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10
Output: true
Explanation: The triplets [1, 3, 6] and [1, 2, 7] both sum to 10.

Input: arr[] = [40, 20, 10, 3, 6, 7], sum = 24
Output: false
Explanation:  No triplet in the array sums to 24
*/
#include<stdio.h>
int main(){
    int arr[6] = {1,4,45,6,10,8}; // 8+ 4+1 = 13 (ans) => 1 pair
    int targetVal = 13;
    int pairs = 0;
    for(int i = 0; i<=5; i++){
        for(int j = i +1; j<=5; j++){
            for(int k = j + 1; k<=5; k++){
                if (arr[i] + arr[j] + arr[k] == targetVal)
                {
                    pairs +=1;
                }
                
            }
        }
    }
    printf("The No. Of Triplets are: %d", pairs);
    return 0;
}