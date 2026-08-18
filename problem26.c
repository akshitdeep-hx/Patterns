/*
 1 2 3 4 5 6 7 8 9 
   1 2 3 4 5 6 7 
     1 2 3 4 5 
       1 2 3 
         1 
       1 2 3 
     1 2 3 4 5 
   1 2 3 4 5 6 7 
 1 2 3 4 5 6 7 8 9 
*/

#include<stdio.h>

int main()
{
    int i, j, k, comp, rows;
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
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}