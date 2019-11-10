## Chapter 14

- [Ex_1](./Ex_1.c)
    > Redo Review Question 5, but make the argument the spelled-out name of the month instead of the month number. (Don’t forget about strcmp() .) Test the function in a simple program.
- [Ex_2](./Ex_2.c)
    > Write a program that prompts the user to enter the day, month, and year. The month can be a month number, a month name, or a month abbreviation. The program then should return the total number of days in the year up through the given day. (Do take leap years into account.)
- [Ex_3](./Ex_3.c)
    > Revise the book-listing program in Listing 14.2 so that it prints the book descriptions in the order entered, then alphabetized by title, and then in order of increased value.
- [Ex_4](./Ex_4.c)
    > Write a program that creates a structure template with two members according to the following criteria:
    >   - a. The first member is a social security number. The second member is a structure with three members. Its first member contains a first name, its second member contains a middle name, and its final member contains a last name. Create and initialize an array of five such structures. Have the program print the data in this format: `Dribble, Flossie M. –– 302039823` Only the initial letter of the middle name is printed, and a period is added. Neither the initial (of course) nor the period should be printed if the middle name member is empty. Write a function to do the printing; pass the structure array to the function. 
    >   - b. Modify part a. by passing the structure value instead of the address.
- [Ex_5](./Ex_5.c)
    > Write a program that fits the following recipe:
    >   - a. Externally define a name structure template with two members: a string to hold the first name and a string to hold the second name.
    >   - b. Externally define a student structure template with three members: a name structure, a grade array to hold three floating-point scores, and a variable to hold the average of those three scores.
    >   - c. Have the main() function declare an array of CSIZE (with CSIZE = 4 ) student structures and initialize the name portions to names of your choice. Use functions to perform the tasks described in parts d., e., f., and g.
    >   - d. Interactively acquire scores for each student by prompting the user with a student name and a request for scores. Place the scores in the grade array portion of the appropriate structure. The required looping can be done in main() or in the function, as you prefer.
    >   - e. Calculate the average score value for each structure and assign it to the proper member.
    >   - f. Print the information in each structure.
    >   - g. Print the class average for each of the numeric structure members.
- [Ex_6](./Ex_6.c)
    > A text file holds information about a softball team. Each line has data arranged as follows: `4 Jessie Joybat 5 2 1 1` The first item is the player’s number, conveniently in the range 0–18. The second item is the player’s first name, and the third is the player’s last name. Each name is a single word. The next item is the player’s official times at bat, followed by the number of hits, walks, and runs batted in (RBIs). The file may contain data for more than one game, so the same player may have more than one line of data, and there may be data for other players between those lines. Write a program that stores the data into an array of structures. The structure should have members to represent the first and last names, the at bats, hits, walks, and RBIs (runs batted in), and the batting average (to be calculated later). You can use the player number as an array index. The program should read to end-of-file, and it should keep cumulative totals for each player. The world of baseball statistics is an involved one. For example, a walk or reaching base on an error doesn’t count as an at-bat but could possibly produce an RBI. But all this program has to do is read and process the data file, as described next, without worrying about how realistic the data is. The simplest way for the program to proceed is to initialize the structure contents to zeros, read the file data into temporary variables, and then add them to the contents of the corresponding structure. After the program has finished reading the file, it should then calculate the batting average for each player and store it in the corresponding structure member. The batting average is calculated by dividing the cumulative number of hits for a player by the cumulative number of at-bats; it should be a floating-point calculation. The program should then display the cumulative data for each player along with a line showing the combined statistics for the entire team.
- [Ex_7](./Ex7)
    > Modify Listing 14.14 so that as each record is read from the file and shown to you, you are given the chance to delete the record or to modify its contents. If you delete the record, use the vacated array position for the next record to be read. To allow changing the existing contents, you’ll need to use the "r+b" mode instead of the "a+b" mode, and you’ll have to pay more attention to positioning the file pointer so that appended records don’t overwrite existing records. It’s simplest to make all changes in the data stored in program memory and then write the final set of information to the file. One approach to keeping track is to add a member to the book structure that indicates whether it is to be deleted.
- [Ex_8](./Ex8)
    > The Colossus Airlines fleet consists of one plane with a seating capacity of 12. It makes one flight daily. Write a seating reservation program with the following features:
    >   - a. The program uses an array of 12 structures. Each structure should hold a seat identification number, a marker that indicates whether the seat is assigned, the last name of the seat holder, and the first name of the seat holder.
    >   - b. The program displays the following menu:
    ```
        To choose a function, enter its letter label:
        a) Show number of empty seats
        b) Show list of empty seats
        c) Show alphabetical list of seats
        d) Assign a customer to a seat assignment
        e) Delete a seat assignment
        f) Quit
    ```
    >   - c. The program successfully executes the promises of its menu. Choices d) and e) require additional input, and each should enable the user to abort an entry.
    >   - d. After executing a particular function, the program shows the menu again, except for choice f) .
    >   - e. Data is saved in a file between runs. When the program is restarted, it first loads in the data, if any, from the file.
- [Ex_9](./Ex9)
    > Colossus Airlines (from exercise 8) acquires a second plane (same capacity) and expands its service to four flights daily (Flights 102, 311, 444, and 519). Expand the program to handle four flights. Have a top-level menu that offers a choice of flights and the option to quit. Selecting a particular flight should then bring up a menu similar to that of exercise 8. However, one new item should be added: confirming a seat assignment. Also, the quit choice should be replaced with the choice of exiting to the top-level menu. Each display should indicate which flight is currently being handled. Also, the seat assignment display should indicate the confirmation status.
- [Ex_10](./Ex_10.c)
    > Write a program that implements a menu by using an array of pointers to functions. For instance, choosing a from the menu would activate the function pointed to by the first element of the array.
- [Ex_11](./Ex_11.c)
    > Write a function called transform() that takes four arguments: the name of a source array containing type double data, the name of a target array of type double , an int representing the number of array elements, and the name of a function (or, equivalently, a pointer to a function). The transform() function should apply the indicated function to each element in the source array, placing the return value in the target array. For example, the call `transform(source, target, 100, sin);` would set target[0] to sin(source[0]) , and so on, for 100 elements. Test the function in a program that calls transform() four times, using two functions from the math.h library and two suitable functions of your own devising as arguments to successive calls of the transform() function.