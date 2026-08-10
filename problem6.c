/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *   
*/

#include<stdio.h>

int main(){
    int i , j, k, rows;
    printf("Enter number of Rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0 ; j < 2 * i; j++)
        {
            printf(" ");
        }

        for(k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}