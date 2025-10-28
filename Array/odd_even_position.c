/*
Ques: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
*/
// let array element from user using for loop for practicing
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Element:");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n;j++){
        if(j%2 !=0){
            arr[j] = arr[j] * 2;
        }
        else{
            arr[j] +=10;
        }
    }
    for(int k=0;k<n;k++){
        printf("%d ", arr[k]);
    }
    return 0;
}