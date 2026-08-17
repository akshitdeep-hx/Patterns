/*
         A 
       A B C 
     A B C D E 
   A B C D E F G 
 A B C D E F G H I 
   A B C D E F G 
     A B C D E 
       A B C 
         A 
*/

#include<stdio.h>

int main()
{
    int i, j, k, comp, rows;
    printf("Enter no of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < 2 * rows - 1; i++)
    {
        if(i < rows)
        {
            comp =  2 * (rows - i) - 1;
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
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}