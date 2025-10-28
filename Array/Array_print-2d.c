/*How to Print 2D or 3D Elements of Array in C*/
// 2D Array Printing
#include <stdio.h>
int main()
{
    int arr[3][2] = {{1, 2}, {2, 3}, {3, 5}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}