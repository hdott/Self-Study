## Chapter 15

- [Ex_1](./Ex_1.c)
    > Write a function that converts a binary string to a numeric value. That is, if you have char * pbin = "01001001"; you can pass pbin as an argument to the function and have the function return an int value of 25 .
- [Ex_2](./Ex_2.c)
    > Write a program that reads two binary strings as command-line arguments and prints the results of applying the ~ operator to each number and the results of applying the & , | , and ^ operators to the pair. Show the results as binary strings. (If you don’t have a command-line environment available, have the program read the strings interactively.)
- [Ex_3](./Ex_3.c)
    > Write a function that takes an int argument and returns the number of “on” bits in the argument. Test the function in a program.
- [Ex_4](./Ex_4.c)
    > Write a function that takes two int arguments: a value and a bit position. Have the function return 1 if that particular bit position is 1, and have it return 0 otherwise. Test the function in a program.
- [Ex_5](./Ex_5.c)
    > Write a function that rotates the bits of an unsigned int by a specified number of bits to the left. For instance, rotate_l(x,4) would move the bits in x four places to the left, and the bits lost from the left end would reappear at the right end. That is, the bit moved out of the high-order position is placed in the low-order position. Test the function in a program.
- [Ex_6](./Ex_6.c)
    > Design a bit-field structure that holds the following information:
    >   - Font ID: A number in the range 0–255
    >   - Font Size: A number in the range 0–127
    >   - Alignment: A number in the range 0–2 represented the choices Left, Center, and Right
    >   - Bold: Off (0) or on (1)
    >   - Italic: Off (0) or on (1)
    >   - Underline: Off (0) or on (1)
    > Use this structure in a program that displays the font parameters and uses a looped menu to let the user change parameters. For example, a sample run might look like this:
    ```
        ID SIZE ALIGNMENT  B   I   U
        1   12   left    off off off
        
        f)change font
        s)change size
        b)toggle bold
        i)toggle italic
        q)quit
        a)change alignment
        u)toggle underline
        s
        Enter font size (0-127): 36

        ID SIZE ALIGNMENT  B   I   U
        1   36   left    off off off

        f)change font
        s)change size
        b)toggle bold
        i)toggle italic
        q)quit
        a)change alignment
        u)toggle underline
        a
        Select alignment:
        l)left
        c)center
        r)right
        r

        ID SIZE ALIGNMENT  B   I   U
        1   36   right    off off off
        
        f)change font
        s)change size
        b)toggle bold
        i)toggle italic
        q)quit
        a)change alignment
        u)toggle underline
        i

        ID SIZE ALIGNMENT  B   I   U
        1   36   right    off on off

        f)change font
        s)change size
        b)toggle bold
        i)toggle italic
        q)quit
        a)change alignment
        u)toggle underline
        q
        Bye!
    ```
    > The program should use the & operator and suitable masks to ensure that the ID and size entries are converted to the specified range.
- [Ex_7](./Ex_7.c)
    > Write a program with the same behavior as described in exercise 6, but use an unsigned long variable to hold the font information and use the bitwise operators instead of bit members to manage the information.