/*
         A 
       A   C 
     A       E 
   A           G 
 A               I 
   A           G 
     A       E 
       A   C 
         A 
*/

#include<stdio.h>

int main()
{
    int i, j, k, comp, rows;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < 2 * rows - 1; i ++)
    {
        if(i < rows)
        {
            comp = 2 * (rows - i) - 1;
        }
        else
        {
            comp = 2 * (i - rows + 1) + 1;
        }

        for(j = 0; j < comp; j++)
        {
            printf(" ");
        }

        for(k = 0; k < 2 * rows - comp; k++)
        {
            if(k == 0 || k == 2 * rows - comp - 1)
            {
                printf("%c ", 'A' + k);
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