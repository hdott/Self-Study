## Chapter 4

- [Ex_1](./Ex_1.cpp)
    > Write a C++ Program that requests and displays information as shown in the following example of output:
    ```
        What is your first name? Betty Sue
        What is your last name? Yewe
        What letter grade do you deserve? B
        What is your age? 22
        Name: Yewe, Betty Sue
        Grade: C
        Age: 22
    ```
    > Note that the program adjusts the grade downward. Assume that the user requests an A, B, or C so that you don't have to worry about the gap between D and F.
- [Ex_3](./Ex_3.cpp)
    > Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string, consisting of the user's last name followed by a comma, a space, and first name. Use char arrays and functions from the cstring header file. A simple run could look like this:
    ```
        Enter your first name: Flip
        Enter your last name: Fleming
        Here's the information in a singe string: Fleming, Flip
    ```
- [Ex_4](./Ex_4.cpp)
    > Write a program that asks the user to enter his or her first name and then last name, and then constructs, stores, and displays a third string consisting of the user's last name followed by a comma, a space, and first name. Use string objects and methods from the string header file. A sample run could look like this:
    ```
        Enter your first name: Flip
        Enter your last name: Fleming
        Here's the information in a singe string: Fleming, Flip
    ```
- [Ex_5](./Ex_5.cpp)
    > The CandyBar structure contains three members. The first member holds the brand name of a candy bar. The second holds the weight (which may have a fractional part) of the candy bar, and the third member holds the number of calories (an integer value) in the candy bar. Write a program that declares such a structure and creates a CandyBar variable called snack, initializing its members to "Mocha Munch", 2.3, and 350, respectively. The initialization should be part of the declaration for snack. Finally, the program should display the contents of the snack variable.
- [Ex_6](./Ex_6.cpp)
    > The CandyBar structure contains three members, as described in Ex_5.cpp. Write a program that creates an array of three CandyBar structures, initializes them to values of your choice, and then displays the contents of each structure.
- [Ex_7](./Ex_7.cpp)
    > William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:
    >   - The name of the pizza company, which can consist of more than one word
    >   - The diameter of the pizza
    >   - The weight of the pizza
    > Devise a structure that can hold this information and write a program that uses a structure variable of that type. The program should ask the user to enter each of the preceeding items of information, and then the program should display that information.
- [Ex_8](./Ex_8.cpp)
    > Do Ex_7.cpp but use new to allocate a structure instead of declaring a structure variable. Also have the program request the pizza diameter before it requests the pizza company name.
- [Ex_9](./Ex_9.cpp)
    > Do Ex_6.cpp, but instead of declaring an array of three CandyBar structures, use new to allocate the array dinamically.
- [Ex_10](./Ex_10.cpp)
    > Write a program that requests the user to enter three times for the 40-yd dash (or 40-meter, if your prefer) and then displays the times and the average. Use an array of object to hold the data.