/*
Ques : Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
// Let it from user.
*/
#include <stdio.h>
int main()
{
    int arr[4][2]; // 4 students, 2 columns (roll no and marks)
    // Input From User
    printf("Enter Roll Number and Marks:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // Output Code
    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }
    return 0;
}
