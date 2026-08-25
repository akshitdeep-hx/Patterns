/*
A 
B C 
D E F 
G H I J 
K L M N O
*/

#include<stdio.h>

int main()
{
    int i, j, rows;
    char n = 'A';
    printf("Enter no of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {   
        for(j = 0; j <= i; j++)
        {
            printf("%c ", n++);
        }
        printf("\n");
    }
    return 0;
}