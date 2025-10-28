/*
1. First 10 Natural Numbers Display

Write a program in C to display the first 10 natural numbers.
Expected Output :
1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>
int main(){
    int n;
    printf("How many natural number you want to print:\n");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(i <= n){

            printf("%d ", i);
        }
    }
    return 0;
}