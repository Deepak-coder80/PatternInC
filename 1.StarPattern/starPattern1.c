/*
Pattern 1 :

        *
        * *
        * * *
        * * * *
        
here we want to move across row and move along coloumn and print *

here we use i for move across row. and j for move and print *

now we can make relation  between i and j 
    row number(i)       number of * (j)
        1                   1
        2                   2
        3                   3

    and go on
    so from here we know that print * according to the row number
*/

#include<stdio.h>

int main(){
    //declare variable called row for get the number of row from user and for loop variables i and j
    int row,i,j;

    //get number of rows from user
    printf("Enter number of rows:");
    scanf("%d",&row);

    //for loop for runnig along 
    for(i=1;i<=row;i++){
        //write a for loop for printing stars
        for(j=1;j<=i;j++){
            printf("*");
        }
        //go to next line after one row 
        printf("\n");
    }

    return 0;
    
}

