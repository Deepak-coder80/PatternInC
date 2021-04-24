/*
Pattern 3 :

            *
          * * 
        * * *
      * * * * 
        
here also we want to move across row and move along coloumn and print *

but here we want to print space also

now we can make relation  between i and j also make relation to make print space .

    number of row (i)       number of stars(j)      number of spaces
            1                       1                      3
            2                       2                      2
            3                       3                      1
            4                       4                      0

 from this table we get an assemption that , 
 we can print space with the condition i+j<=row(actual row or total number of row). here it is i+j<=4

 on the first row 3 spaces and 1 star right?
 here at first postion in first row i=1 and j=1 and as our condition 1+1=2  and 2<4 so it print a space(only one space)
 at second postion in first row i=1 and j=2 => 3<4 so it print a space(only one space)
 at third postion in first row i=1 and j=3 => 4=4 (our condition is i+j<=4) so it print a space(only one space)
 at fourth position in first row i=1 and j=4 => 5<=4(false condition),so it print a star

 and it will go to second row and start the process like this.
 Hope you get the idea.
    
*/

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
            //here we want to check our condition
            if(i+j<=row){
                //here we want to print only one space ,for that just keep a space in between the double cots inside printf
                printf(" ");
            }else{
                //else we want to print star
                printf("*");
            }
        }
        //go to next line after one row 
        printf("\n");
    }

    return 0;
    
}


/*
Just try to do print pattern given below with same logic
     * *  * *
        * * * 
          * *
            * 

we will discuss it in the next file . but try do it your self
*/