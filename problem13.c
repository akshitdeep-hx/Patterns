/*
        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5
*/

#include<stdio.h>

int main()
{
    int i , j , rows, k;

    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        for(k = 0; k <= i; k++)
        {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}