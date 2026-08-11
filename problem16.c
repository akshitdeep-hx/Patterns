/*
A B C D E 
  A B C D 
    A B C 
      A B 
        A
*/

#include<stdio.h>

int main()
{
    int i , j , k , rows;
    printf("Enter no of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        for(k = 0; k < rows - i; k++)
        {
            printf("%c ", 'A' + k );
        }
        printf("\n");
    }
    return 0; 
}