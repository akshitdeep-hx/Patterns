/*
 * * * * * * * * * 
   * * * * * * * 
     * * * * * 
       * * * 
         * 
       * * * 
     * * * * * 
   * * * * * * * 
 * * * * * * * * * 
*/

#include<stdio.h>

int main()
{
    int i, j, k, rows, comp;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < 2 * rows - 1; i++)
    {
        if(i < rows)
        {
            comp = 2 * i + 1;
        }
        else
        {
            comp = 2 * (2 * rows - i) - 3;
        }

        for(j = 0; j < comp; j++)
        {
            printf(" ");
        }

        for(k = 0; k < 2 * rows - comp; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}