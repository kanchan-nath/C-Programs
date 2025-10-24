/*
Third largest element in an array of distinct elements̉
Given an array of n integers, the task is to find the third largest element. All the elements in the array are distinct integers.

Examples :

Input: arr[] = {1, 14, 2, 16, 10, 20}
Output: 14
Explanation: Largest element is 20, second largest element is 16 and third largest element is 14

Input: arr[] = {19, -10, 20, 14, 2, 16, 10}
Output: 16
Explanation: Largest element is 20, second largest element is 19 and third largest element is 16
*/


#include<stdio.h>
int main(){
    int arr[6] = {1,14,2,16,10,20};
    int maxVal = arr[0];
    int smaxVal = -1;
    int tmaxVal = -1;
    for (int i= 0; i<=5; i++){
        if(arr[0]<arr[i]){
            maxVal = arr[i];
        }
    }
    for(int j = 0; j<=5; j++){
        if(smaxVal<arr[j] && arr[j]<maxVal){
            smaxVal = arr[j];
        }
    }
    for (int k = 0; k <= 5; k++)
    {
        if (tmaxVal < arr[k] && arr[k] < maxVal && arr[k] < smaxVal){
            tmaxVal = arr[k];
        }
      
    }
    printf("Third Largest Element is :  %D", tmaxVal);
    return 0;
}