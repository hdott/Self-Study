## Chapter 13

- [Ex_1](./Ex_1.c)
    > Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user’s response instead of using command-line arguments.
- [Ex_2](./Ex_2.c)
    > Write a file-copy program that takes the original filename and the copy file from the command line. Use standard I/O and the binary mode, if possible.
- [Ex_3](./Ex_3.c)
    > Write a file copy program that prompts the user to enter the name of a text file to act as the source file and the name of an output file. The program should use the toupper() function from ctype.h to convert all text to uppercase as it’s written to the output file. Use standard I/O and the text mode.
- [Ex_4](./Ex_4.c)
    > Write a program that sequentially displays onscreen all the files listed in the command line. Use argc to control a loop.
- [Ex_5](./Ex_5.c)
    > Modify the program in Listing 13.5 so that it uses a command-line interface instead of an interactive interface.
- [Ex_6](./Ex_6.c)
    > Programs using command-line arguments rely on the user’s memory of how to use them correctly. Rewrite the program in Listing 13.2 so that, instead of using command-line arguments, it prompts the user for the required information.
- [Ex_7](./Ex_7.c)
    > Write a program that opens two files. You can obtain the filenames either by using command-line arguments or by soliciting the user to enter them.
    >   - a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the first file, line 2 of the second file, and so on, until the last line of the longer file (in terms of lines) is printed.
    >   - b. Modify the program so that lines with the same line number are printed on the same line.
- [Ex_8](./Ex_8.c)
    > Write a program that takes as command-line arguments a character and zero or more filenames. If no arguments follow the character, have the program read the standard input. Otherwise, have it open each file in turn and report how many times the character appears in each file. The filename and the character itself should be reported along with the count. Include error-checking to see whether the number of arguments is correct and whether the files can be opened. If a file can’t be opened, have the program report that fact and go on to the next file.
- [Ex_9](./Ex_9.c)
    > Modify the program in Listing 13.3 so that each word is numbered according to the order in which it was added to the list, starting with 1. Make sure that, when the program is run a second time, new word numbering resumes where the previous numbering left off.
- [Ex_10](./Ex_10.c)
    > Write a program that opens a text file whose name is obtained interactively. Set up a loop that asks the user to enter a file position. The program then should print the part of the file starting at that position and proceed to the next newline character. Let negative or nonnumeric input terminate the user-input loop.
- [Ex_11](./Ex_11.c)
    > Write a program that takes two command-line arguments. The first is a string; the second is the name of a file. The program should then search the file, printing all lines containing the string. Because this task is line oriented rather than character oriented, use fgets() instead of getc() . Use the standard C library function strstr() (briefly described in exercise 7 of Chapter 11 ) to search each line for the string. Assume no lines are longer than 255 characters.
- [Ex_12](./Ex_12.c)
    > Create a text file consisting of 20 rows of 30 integers. The integers should be in the range 0–9 and be separated by spaces. The file is a digital representation of a picture, with the values 0 through 9 representing increasing levels of darkness. Write a program that reads the contents of the file into a 20-by-30 array of int s. In a crude approach toward converting this digital representation to a picture, have the program use the values in this array to initialize a 20-by-31 array of char s, with a 0 value corresponding to a space character, a 1 value to the period character, and so on, with each larger number represented by a character that occupies more space. For example, you might use # to represent 9. The last character (the 31st) in each row should be a null character, making it an array of 20 strings. Have the program display the resulting picture (that is, print the strings) and also store the result in a text file. For example, suppose you start with this data:
    ```
        0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 2 0 0 0 0 0 0 0 0 0 0 0
        0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 5 2 0 0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 1 9 8 5 4 5 2 0 0 0 0 0 0 0 0 0
        0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 0 4 5 2 0 0 0 0 0 0 0 0
        0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 4 5 2 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 1 8 5 0 0 0 4 5 2 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 4 5 2 0 0 0 0 0
        5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
        8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
        9 9 9 9 0 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 3 9 9 9 9 9 9
        8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
        5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
        0 0 0 0 2 2 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
        0 0 0 0 3 3 0 0 0 0 0 0 5 8 9 9 8 5 0 5 6 1 1 1 1 1 6 5 0 0
        0 0 0 0 4 4 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
        0 0 0 0 5 5 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
        0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
    ```
    > For one particular choice of output characters, the output looks like this:
    ```
        #         *%##%*'           
            #       *%##%**'          
                    *%.#%*~*'         
            #       *%##%* ~*'        
        #         *%##%*  ~*'       
                    *%#.%*   ~*'      
                    *%##%*    ~*'     
        *************%##%*************
        %%%%%%%%%%%%*%##%*%%%%%%%%%%%%
        #### ##################:######
        %%%%%%%%%%%%*%##%*%%%%%%%%%%%%
        *************%##%*************
                    *%##%*            
                    *%##%*    ==      
            ''      *%##%*  *=  =*    
            ::      *%##%* *=.....=*  
            ~~      *%##%*  *=  =*    
            **      *%##%*    ==      
                    *%##%*            
                    *%##%*   
    ```
- [Ex_13](./Ex_13.c)
    > Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard arrays.
- [Ex_14](./Ex_14.c)
    > Digital images, particularly those radioed back from spacecraft, may have glitches. Add a de-glitching function to programming exercise 12. It should compare each value to its immediate neighbors to the left and right, above and below. If the value differs by more than 1 from each of its neighbors, replace the value with the average of the neighboring values. You should round the average to the nearest integer value. Note that the points along the boundaries have fewer than four neighbors, so they require special handling.