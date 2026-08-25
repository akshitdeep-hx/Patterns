/*
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include<stdio.h>

int main()
{
    int i, j, rows, n;
    n = 1;
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}