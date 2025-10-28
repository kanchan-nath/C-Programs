/*How to Print 2D or 3D Elements of Array in C*/
// 3D Array Printing
#include <stdio.h>
int main()
{
    int arr[3][2][4] = {{1, 2,6}, {2, 3,8}, {3,4, 5}};
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