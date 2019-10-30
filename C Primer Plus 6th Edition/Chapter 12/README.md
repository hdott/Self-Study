## Chapter 12

- [Ex_1](./Ex_1.c)
    > Rewrite the program in Listing 12.4 so that it does not use global variables.
- [Ex_2](./Ex2)
    > Gasoline consumption commonly is computed in miles per gallon in the U.S. and in liters per 100 kilometers in Europe. What follows is part of a program that asks the user to choose a mode (metric or U.S.) and then gathers data and computes fuel consumption:
    ```
        // pe12-2b.c
        // compile with pe12-2a.c
        #include <stdio.h>
        #include "pe12-2a.h"
        int main(void)
        {
            int mode;
            printf("Enter 0 for metric mode, 1 for US mode: ");
            scanf("%d", &mode);
            while (mode >= 0)
            {
                set_mode(mode);
                get_info();
                show_info();
                printf("Enter 0 for metric mode, 1 for US mode");
                printf(" (-1 to quit): ");
                scanf("%d", &mode);
            }
            printf("Done.\n");
            return 0;
        }
    ```
    > Here is some sample output:
    ```
        Enter 0 for metric mode, 1 for US mode: 0
        Enter distance traveled in kilometers: 600
        Enter fuel consumed in liters: 78.8
        Fuel consumption is 13.13 liters per 100 km.
        Enter 0 for metric mode, 1 for US mode (-1 to quit): 1
        Enter distance traveled in miles: 434
        Enter fuel consumed in gallons: 12.7
        Fuel consumption is 34.2 miles per gallon.
        Enter 0 for metric mode, 1 for US mode (-1 to quit): 3
        Invalid mode specified. Mode 1(US) used.
        Enter distance traveled in miles: 388
        Enter fuel consumed in gallons: 15.3
        Fuel consumption is 25.4 miles per gallon.
        Enter 0 for metric mode, 1 for US mode (-1 to quit): -1
        Done.
    ```
    > If the user enters an incorrect mode, the program comments on that and uses the most recent mode. Supply a pe12-2a.h header file and a pe12-2a.c source code file to make this work. The source code file should define three file-scope, internal-linkage variables. One represents the mode, one represents the distance, and one represents the fuel consumed. The get_info() function prompts for data according to the mode setting and stores the responses in the file-scope variables. The show_info() function calculates and displays the fuel consumption based on the mode setting. You can assume the user responds with numeric input.
- [Ex_3](./Ex3)
    > Redesign the program described in Programming Exercise 2 so that it uses only automatic variables. Have the program offer the same user interface—that is, it should prompt the user to enter a mode, and so on. You’ll have to come up with a different set of function calls, however.
- [Ex_4](./Ex_4.c)
    > Write and test in a loop a function that returns the number of times it has been called.
- [Ex_5](./Ex_5.c)
    > Write a program that generates a list of 100 random numbers in the range 1–10 in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11 ,“Character Strings and String Functions,” to type int . In this case, just sort the numbers themselves.)
- [Ex_6](./Ex_6.c)
    > Write a program that generates 1,000 random numbers in the range 1–10. Don’t save or print the numbers, but do print how many times each number was produced. Have the program do this for 10 different seed values. Do the numbers appear in equal amounts? You can use the functions from this chapter or the ANSI C rand() and srand() functions, which follow the same format that our functions do. This is one way to examine the randomness of a particular random-number generator.
- [Ex_7](./Ex7)
    > Write a program that behaves like the modification of Listing 12.13 , which we discussed after showing the output of Listing 12.13 . That is, have the program produce output like the following:
    ```
        Enter the number of sets; enter q to stop : 18
        How many sides and how many dice? 6 3
        Here are 18 sets of 3 6-sided throws.
        12 10 6 9 8 14 8 15 9 14 12 17 13 8 14
        How many sets? Enter q to stop: q
    ```
- [Ex_8](./Ex_8.c)
    > Here’s part of a program:
    ```
        // pe12-8.c
        #include <stdio.h>
        int * make_array(int elem, int val);
        void show_array(const int ar[], int n);
        int main(void)
        {
            int * pa;
            int size;
            int value;
            printf("Enter the number of elements: ");
            while (scanf("%d", &size) == 1 && size > 0)
            {
                printf("Enter the initialization value: ");
                scanf("%d", &value);
                pa = make_array(size, value);
                if (pa)
                {
                    show_array(pa, size);
                    free(pa);
                }
                printf("Enter the number of elements (<1 to quit): ");
            }
            printf("Done.\n");
            return 0;
        }
    ```
    > Complete the program by providing function definitions for make_array() and show_array() . The make_array() function takes two arguments. The first is the number of elements of an int array, and the second is a value that is to be assigned to each element. The function uses malloc() to create an array of a suitable size, sets each element to the indicated value, and returns a pointer to the array. The show_array() function displays the contents, eight numbers to a line.
- [Ex_9](./Ex_9.c)
    > Write a program with the following behavior. First, it asks you how many words you wish to enter. Then it has you enter the words, and then it displays the words. Use malloc() and the answer to the first question (the number of words) to create a dynamic array of the corresponding number of pointers-to- char . (Note that because each element in the array is a pointer-to- char , the pointer used to store the return value of malloc() should be a pointer-to-a-pointer-to- char .) When reading the string, the program should read the word into a temporary array of char , use malloc() to allocate enough storage to hold the word, and store the address in the array of char pointers. Then it should copy the word from the temporary array into the allocated storage. Thus, you wind up with an array of character pointers, each pointing to an object of the precise size needed to store the particular word. A sample run could look like this:
    ```
        How many words do you wish to enter? 5
        Enter 5 words now:
        I enjoyed doing this exerise
        Here are your words:
        I
        enjoyed
        doing
        this
        exercise
    ```