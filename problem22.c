/*
     A B C D E 
    A B C D E 
   A B C D E 
  A B C D E 
 A B C D E
*/

#include<stdio.h>

int main()
{
    int i, j, k, rows;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        for(k = 0; k < rows; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}