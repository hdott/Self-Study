## Chapter 6

- [Ex_1.c](./Ex_1.c)
    > Write a program that creates an array with 26 elements and stores the 26 lowercase letters in it. Also have it show the array contents.
- [Ex_2.c](./Ex_2.c)
    > Use nested loops to produce the following pattern:
    ```
        $
        $$
        $$$
        $$$$
        $$$$$
    ```
- [Ex_3.c](./Ex_3.c)
    > Use nested loops to produce the following pattern:
    ```
        F
        FE
        FED
        FEDC
        FEDCB
        FEDCBA
    ```
- [Ex_4.c](./Ex_4.c)
    > Use nested loops to produce the following patter:
    ```
        A
        BC
        DEF
        GHIJ
        KLMNO
        PQRSTU
    ```
- [Ex_5.c](./Ex_5.c)
    > Have a program request the user to enter an uppercase letter. Use nested loops to produce a pyramid pattern like this:
    ```
            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA
    ```
    > The pattern should extend to the character entered. For example, the preceeding pattern would result from an input value of E. Hint: Use an outer loop to handle the rows. Use three inner loops in a row, one to handle the spaces, one for printing letters in ascending order, and one for printing letters in descending order.
- [Ex_6.c](./Ex_6.c)
    > Write a program that prints a table with each line giving an integer, its square, and its cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
- [Ex_7.c](./Ex_7.c)
    > Write a program that reads a single word into a character array and then prints the word backwards. Hint: Use strlen() to compute the index of the last character in the array.
- [Ex_8.c](./Ex_8.c)
    > Write a program that requests two floating-point nmbers and prints the value of their difference divided by their product. Have the program loop through pairs of input values until the user enters nonnumeric input.
- [Ex_9.c](./Ex_9.c)
    > Modify Ex_8.c so that it uses a function to return the value of the calculation.
- [Ex_10.c](./Ex_10.c)
    > Write a program that requests lower and upper integer limits, calculates the sum of all the integer squares from the square of the lower limit to the square of the upper limit, and displays the answer. The program should then continue to prompt for limits and display answers until the user enters an upper limit that is equal to or less than the lower limit. A sample should look something like this:
    ```
        Enter lower and upper integer limits: 5 9
        The sums of the squares from 25 to 81 is 255
        Enter next set of limits: 3 25
        The sums of the squares from 9 to 625 is 5520
        Enter next set of limits: 5 5
        Done
    ```
- [Ex_11.c](./Ex_11.c)
    > Write a progam that reads eight integers into an array and then prints them in reverse order.
- [Ex_12.c](./Ex_12.c)
    > Conside these two infinite series:
    ```
        1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
        1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
    ```
    > Write a program that evaluates running totals of these two series up to some limit of number of terms. Hint: -1 times itsef an odd number of times is -1, and -1 times itself an even number of times is 1. Have the user enter the limit interactively; let a zero or negative value terminate input. Look at the running totals after 100 terms, 1000 terms, 10000 terms. Does either series appear to be convergin to some value?
- [Ex_13.c](./Ex_13.c)
    > Write a program that creates an eight-element array of ints and set the elements to the first eight powers of 2 and then prints the values. Use a for loop to set the values, and, for variety, use a do while loop to display the values.
- [Ex_14.c](./Ex_14.c)
    > Write a program that creates a two eight-element arrays of doubles and uses a loop to let the user enter values for the eight elements of the first array. Have the program set the elements of the second array to the cumulative totals of the elements of the first array. For example, the fourth element of the second array should equal the sum of the first four elements of the first array, and the fifth element of the second array should equal the sum of the first five elements of the first array. (It’s possible to do this with nested loops, but by using the fact that the fifth element of the second array equals the fourth element of the second array plus the fifth element of the first array, you can avoid nesting and just use a single loop for this task.) Finally, use loops to display the contents of the two arrays, with the first array displayed on one line and with each element of the second array displayed below the corresponding element of the first array.
- [Ex_15.c](./Ex_15.c)
    > Write a program that reads in a line of input and then prints the line in reverse order. You can store the input in an array of char ; assume that the line is no longer than 255 characters. Recall that you can use scanf() with the %c specifier to read a character at a time from input and that the newline character ( \n ) is generated when you press the Enter key.
- [Ex_16.c](./Ex_16.c)
    > Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest compounded annually. (That is, interest is 5% of the current balance, including previous addition of interest.) Write a program that finds how many years it takes for the value of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two values at that time.
- [Ex_17.c](./Ex_17.c)
    > Chuckie Lucky won a million dollars (after taxes), which he places in an account that earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a program that finds out how many years it takes for Chuckie to empty his account.
- [Ex_18.c](./Ex_18.c)
    > Professor Rabnud joined a social media group. Initially he had five friends. He noticed that his friend count grew in the following fashion. The first week one friend dropped out and the remaining number of friends doubled. The second week two friends dropped out and the remaining number of friends doubled. In general, in the Nth week, N friends dropped out and the remaining number doubled. Write a program that computes and displays the number of friends each week. The program should continue until the count exceeds Dunbar’s number. Dunbar’s number is a rough estimate of the maximum size of a cohesive social group in which each member knows every other member and how they relate to one another. Its approximate value is 150.