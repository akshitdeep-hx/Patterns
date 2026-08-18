/*
* * * * * 
*    * 
*    * 
*    * 
* * * * * 
*/

#include<stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < rows; j++)
        {
            if(i > 0 && i < rows - 1 && j > 0 && j < rows - 1)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}