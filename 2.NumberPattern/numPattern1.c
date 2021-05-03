/*
Pattern 1 :

        1
        1 2
        1 2 3
        1 2 3 4
        
here we want to move across row and move along coloumn and print number of coloumn corresponding to the row 
ie from 1 to that row number

we can evaluate like our first lesson (If you are not check it Please check it);

        Row Number :    1       2       3       4
   numbers printer :    1       1-2     1-3     1-4


   Like other problems We want to use two for loops . One for traveling through the rows and other for printing
   the numbers in corresponding row.

   let us take it 'i' and 'j' , here we know i is the row number and j is the column number
   we have answer 3 questions while running the for loop

   Question in for loop                 answer for i            answer for j

    1) Where to start                           1                       1(because we want to print 1 to the row number)
    2) What is the condition               i<=rowsize                   i
    3) increment/decrement                  increment                   increment

    I hope you get an idea about this problem . Now we can do the coding practise


*/