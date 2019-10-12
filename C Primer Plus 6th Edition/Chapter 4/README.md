## Chapter 3

- [Ex_1](./Ex_1.c)
    > Write a program that asks for your first name, your last name, and then prints the names in the format last, first.
- [Ex_2](./Ex_2.c)
    > Write a program that requests your first name and does the following with it:
    >   - Prints it enclosed in double quotation marks
    >   - Prints it in a field of 20 characters wide, with the whole field in quotes and the name at the right end of the field
    >   - Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
    >   - Prints it in a field three characters wider than the name
- [Ex_3](./Ex_3.c)
    > Write a program that reads in a floating-point number and prints it first in decimal-point notation and then in exponential notation. Have the output use the following formats:
    ```
        The input is 21.3 or 2.1e+001
        The input is +21.290 or 2.129E+001
    ```
- [Ex_4](./Ex_4.c)
    > Write a program that requests your height in inches and your name, and then displays the information in the following form:
    ```
        Dabney, you are 6.208 feet tall
    ```
    > If you prefer, request the height in centimeters and display it in meters.
- [Ex_5](./Ex_5.c)
    > Write a program that requests the download speed in megabits per second (Mbs) and the size of a file in megabytes (MB). The program should calculate the download time for the file. Note that in this context one byte is eight bits. Use type float, and use / for division. The program should report all three values (download speed, file size, and download time) showing two digits to the right of the decimal point, as in the following: 
    ```
        At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
    ```
- [Ex_6](./Ex_6.c)
    > Write a program that requests the user's first name and then the user's last name. Have it print the entered names on one line and the number of letters in each name on the following line. Align each letter count with the end of the corresponding name, as in the following:
    ```
        Melissa Honeybee
              7        8
    ```
    > Next, have it print the same information, but with the counts aligned with the beginning of each name.
    ```
        Melissa Honeybee
        7       8
    ```
- [Ex_7](./Ex_7.c)
    > Write a program that sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0. Display each result three times - once showing four digits to the right of the decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits to the right of the decimal. Also have the program include float.h and display the values of FLT_DIG and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
- [Ex_8](./Ex_8.c)
    > Write a program that asks the user to enter the number of miles traveled and the number of agllons of gasoline consumed. It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal. Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 km, it should convert the mile-per-gallon value to a liters-per-100-km value, the usual European way of expressing fuel consumption, and display the result, showing one place to the right of the decimal. Note that the U.S. scheme measures the distance traveled per amount of fuel, whereas the European scheme measures the amount of fuel per distance. Use symbolic constants for the two conversion factors.