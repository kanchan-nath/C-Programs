/*
Input: arr[] = [1, 4, 3, 2, 6, 5]
Output:  [5, 6, 2, 3, 4, 1]
Explanation: The first element 1 moves to last position, the second element 4 moves to second-last and so on.

Input: arr[] = [4, 5, 1, 2]
Output: [2, 1, 5, 4]
Explanation: The first element 4 moves to last position, the second element 5 moves to second last and so on.
*/

#include<stdio.h>
int brr[6];
int main(){
int arr[6] = {1,4,3,2,6,5};
for  (int i = 0; i<= 5; i++){
    brr[i] = arr[5 - i];
    printf("%d ", brr[i]);
}


    return 0;
}