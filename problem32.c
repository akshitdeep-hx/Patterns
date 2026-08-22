/*
1 2 3 4 5 6 7 8 9 
   1           7 
     1       5 
       1   3 
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
        for(j = 0; j < 2 * i + 1; j++)
        {
            printf(" ");
        }

        for(k = 0; k < 2 * (rows - i)  - 1; k++)
        {
            if(k == 0 || k == 2 * (rows - i) - 2 || i == 0)
            {
                printf("%d ", k + 1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}