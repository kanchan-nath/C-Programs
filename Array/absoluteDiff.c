/*Ques: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.*/
#include<stdio.h>
int main(){
    int arr[9] = {1,3,5,7,9,11,13,15,17};
    int evenSum = 0;
    int oddSum = 0;
    int Diff = 0;
    for(int  i = 0;i<=8; i++){
        if (i % 2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    Diff = evenSum - oddSum; 
    printf("%d", Diff);
    return 0;
}