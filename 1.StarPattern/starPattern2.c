/*
Pattern 2 :

        * * * *
        * * *
        * * 
        * 
        
here aldo  we want to move across row and move along coloumn and print *

here we use i for move across row. and j for move and print *

now we can make relation  between i and j 
    row number(i)       number of * (j)
        1                   4
        2                   3
        3                   2
        4                   1

    and go on
    here we can adapt a easy way , here we can just reverse the conditions in the pattern1.c 
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
        for(j=i;j>=1;j--){
            printf("*");
        }
        //go to next line after one row 
        printf("\n");
    }

    return 0;
}
