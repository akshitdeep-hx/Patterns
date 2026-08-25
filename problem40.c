/*

*/

#include<stdio.h>

int main()
{
    int i, j, k, rows, c;
    c = 1;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        for(k = 1; k <= i; k++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}