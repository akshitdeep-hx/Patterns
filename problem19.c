/*
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3 
        1
*/

#include<stdio.h>

int main()
{

    int i, j, k, rows;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        for(k = 0;k < 2 * (rows - i) - 1; k++ )
        {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}