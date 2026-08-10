/*
         * 
       * * * 
     * * * * * 
   * * * * * * * 
 * * * * * * * * * 
   * * * * * * * 
     * * * * * 
       * * * 
         * 

*/

#include<stdio.h>

int main(){
    int i , j, k , rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0 ; i < 2 * rows - 1; i++)
    {
        int comp;
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

        for(k = 0; k < 2 * rows - comp; k++ )
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
