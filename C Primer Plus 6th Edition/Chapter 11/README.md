## Chapter 11

- [Ex_1](./Ex_1.c)
    > Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines), storing the results in an array whose address is passed as an argument.
- [Ex_2](./Ex_2.c)
    > Modify and test the function in exercise 1 so that it stops after n characters or after the first blank, tab, or newline, whichever comes first. (Don’t just use scanf() .)
- [Ex_3](./Ex_3.c)
    > Design and test a function that reads the first word from a line of input into an array and discards the rest of the line. It should skip over leading whitespace. Define a word as a sequence of characters with no blanks, tabs, or newlines in it. Use getchar() , not
- [Ex_5](./Ex_5.c)
    > Design and test a function that searches the string specified by the first function parameter for the first occurrence of a character specified by the second function parameter. Have the function return a pointer to the character if successful, and a null if the character is not found in the string. (This duplicates the way that the library strchr() function works.) Test the function in a complete program that uses a loop to provide input values for feeding to the function.
- [Ex_6](./Ex_6.c)
    > Write a function called is_within() that takes a character and a string pointer as its two function parameters. Have the function return a nonzero value (true) if the character is in the string and zero (false) otherwise. Test the function in a complete program that uses a loop to provide input values for feeding to the function.
- [Ex_7](./Ex_7.c)
    > The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1 , truncating s2 or padding it with extra null characters as necessary. The target string may not be null-terminated if the length of s2 is n or more. The function returns s1 . Write your own version of this function; call it mystrncpy() . Test the function in a complete program that uses a loop to provide input values for feeding to the function.
- [Ex_8](./Ex_8.c)
    > Write a function called string_in() that takes two string pointers as arguments. If the second string is contained in the first string, have the function return the address at which the contained string begins. For instance, string_in("hats", "at") would return the address of the a in hats . Otherwise, have the function return the null pointer. Test the function in a complete program that uses a loop to provide input values for feeding to the function.
- [Ex_9](./Ex_9.c)
    > Write a function that replaces the contents of a string with the string reversed. Test the function in a complete program that uses a loop to provide input values for feeding to the function.
- [Ex_10](./Ex_10.c)
    > Write a function that takes a string as an argument and removes the spaces from the string. Test it in a program that uses a loop to read lines until you enter an empty line. The program should apply the function to each input string and display the result.
- [Ex_11](./Ex_11.c)
    > Write a program that reads in up to 10 strings or to EOF , whichever comes first. Have it offer the user a menu with five choices: print the original list of strings, print the strings in ASCII collating sequence, print the strings in order of increasing length, print the strings in order of the length of the first word in the string, and quit. Have the menu recycle until the user enters the quit request. The program, of course, should actually perform the promised tasks.
- [Ex_12](./Ex_12.c)
    > Write a program that reads input up to EOF and reports the number of words, the number of uppercase letters, the number of lowercase letters, the number of punctuation characters, and the number of digits. Use the ctype.h family of functions.
- [Ex_13](./Ex_13.c)
    > Write a program that echoes the command-line arguments in reverse word order. That is, if the command-line arguments are see you later , the program should print later you see .
- [Ex_14](./Ex_14.c)
    > Write a power-law program that works on a command-line basis. The first command-line argument should be the type double number to be raised to a certain power, and the second argument should be the integer power.
- [Ex_15](./Ex_15.c)
    > Use the character classification functions to prepare an implementation of atoi() ; have this version return the value of 0 if the input string is not a pure number.
- [Ex_16](./Ex_16.c)
    > Write a program that reads input until end-of-file and echoes it to the display. Have the program recognize and implement the following command-line arguments:
    >   - -p  Print input as is
    >   - -u  Map input to all uppercase
    >   - -l  Map input to all lowercase
    > Also, if there are no command-line arguments, let the program behave as if the –p argument had been used.