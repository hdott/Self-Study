## Chapter 8

- [Ex_1](./Ex_1.c)
    > Devise a program that counts the number of characters in its input up to the end of file.
- [Ex_2](./Ex_2.c)
    > Write a program that reads input as a stream of characters until encountering EOF . Have the program print each input character and its ASCII decimal value. Note that characters preceding the space character in the ASCII sequence are nonprinting characters. Treat them specially. If the nonprinting character is a newline or tab, print \n or \t , respectively. Otherwise, use control-character notation. For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A . Note that the ASCII value for A is the value for Ctrl+A plus 64. A similar relation holds for the other nonprinting characters. Print 10 pairs per line, except start a fresh line each time a newline character is encountered. (Note: The operating system may have special interpretations for some control characters and keep them from reaching the program.)
- [Ex_3](./Ex_3.c)
    > Write a program that reads input as a stream of characters until encountering EOF . Have it report the number of uppercase letters, the number of lowercase letters, and  the number of other characters in the input. You may assume that the numeric values for the lowercase letters are sequential and assume the same for uppercase. Or, more portably, you can use appropriate classification functions from the ctype.h library.
- [Ex_4](./Ex_4.c)
    > Write a program that reads input as a stream of characters until encountering EOF . Have it report the average number of letters per word. Don’t count whitespace as being letters in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that now. (If you do want to worry about it, consider using the ispunct() function from the ctype.h family.)
- [Ex_5](./Ex_5.c)
    > Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing strategy. For example, have the program initially guess 50, and have it ask the user whether the guess is high, low, or correct. If, say, the guess is low, have the next guess be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be halfway between 75 and 50, and so on. Using this binary search strategy, the program quickly zeros in on the correct answer, at least if the user does not cheat.
- [Ex_6](./Ex_6.c)
    > Modify the get_first() function of Listing 8.8 so that it returns the first non-whitespace character encountered. Test it in a simple program.
- [Ex_7](./Ex_7.c)
    > Modify Programming Ex_8.c from Chapter 7 so that the menu choices are labeled by characters instead of by numbers; use q instead of 5 as the cue to terminate input.
- [Ex_8](./Ex_8.c)
    > Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or division. After getting your choice, the program asks for two numbers, then performs the requested operation. The program should accept only the offered menu choices. It should use type float for the numbers and allow the user to try again if he or she fails to enter a number. In the case of division, the program should prompt the user to enter a new value if 0 is entered as the value for the second number. A typical program run should look like this:
    ```
        Enter the operation of your choice:
        a. add          s. subtract
        m. multiply     d. divide
        q. quit
        a
        Enter first number: 22 .4
        Enter second number: one
        one is not an number.
        Please enter a number, such as 2.5, -1.78E8, or 3: 1
        22.4 + 1 = 23.4
        Enter the operation of your choice:
        a. add          s. subtract
        m. multiply     d. divide
        q. quit
        d
        Enter first number: 18.4
        Enter second number: 0
        Enter a number other than 0: 0.2
        18.4 / 0.2 = 92
        Enter the operation of your choice:
        a. add          s. subtract
        m. multiply     d. divide
        q. quit
        q
        Bye.
    ```