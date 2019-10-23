## Chapter 10

- [Ex_1](./Ex_1.c)
    > Modify the rain program in Listing 10.7 so that it does the calculations using pointers instead of subscripts. (You still have to declare and initialize the array.)
- [Ex_2](./Ex_2.c)
    > Write a program that initializes an array-of- double and then copies the contents of the array into three other arrays. (All four arrays should be declared in the main program.) To make the first copy, use a function with array notation. To make the second copy, use a function with pointer notation and pointer incrementing. Have the first two functions take as arguments the name of the target array, the name of the source array, and the number of elements to be copied. Have the third function take as arguments the name of the target, the name of the source, and a pointer to the element following the last element of the source. That is, the function calls would look like this, given the following declarations:
    ```
        double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
        double target1[5];
        double target2[5];
        double target3[5];
        copy_arr(target1, source, 5);
        copy_ptr(target2, source, 5);
        copy_ptrs(target3, source, source + 5);
    ```
- [Ex_3](./Ex_3.c)
    > Write a function that returns the largest value stored in an array-of-int. Test the function in a simple program.
- [Ex_4](./Ex_4.c)
    > Write a function that returns the index to the largest value stored in an array-of-double. Test the function in a simple program.
- [Ex_5](./Ex_5.c)
    > Write a function that returns the difference between the largest and smallest elements of an array-of-double. Test the function in a simple program.
- [Ex_6](./Ex_6.c)
    > Write a function that reverses the contents of an array of double and test it in a simple program.
- [Ex_7](./Ex_7.c)
    > Write a program that initializes a two-dimensional array-of- double and uses one of the copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a two-dimensional array is an array of arrays, a one-dimensional copy function can be used with each subarray.)
- [Ex_8](./Ex_8.c)
    > Use a copy function from Programming Exercise 2 to copy the third through fifth elements of a seven-element array into a three-element array. The function itself need not be altered; just choose the right actual arguments. (The actual arguments need not be an array name and array size. They only have to be the address of an array element and a number of elements to be processed.)
- [Ex_9](./Ex_9.c)
    > Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLA-based function to copy it to a second two-dimensional array. Also provide a VLA-based function to display the contents of the two arrays. The two functions should be capable, in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable compiler, use the traditional C approach of functions that can process an N×5 array).
- [Ex_10](./Ex_10.c)
    > Write a function that sets each element in an array to the sum of the corresponding elements in two other arrays. That is, if array 1 has the values 2 , 4 , 5 , and 8 and array 2 has the values 1 , 0 , 4 , and 6 , the function assigns array 3 the values 3 , 4 , 9 , and 14 . The function should take three array names and an array size as arguments. Test the function in a simple program.
- [Ex_11](./Ex_11.c)
    > Write a program that declares a 3×5 array of int and initializes it to some values of your choice. Have the program print the values, double all the values, and then display the new values. Write a function to do the displaying and a second function to do the doubling. Have the functions take the array name and the number of rows as arguments.
- [Ex_12](./Ex_12.c)
    > Rewrite the rain program in Listing 10.7 so that the main tasks are performed by functions instead of in main() .
- [Ex_13](./Ex_13.c)
    > Write a program that prompts the user to enter three sets of five double numbers each. (You may assume the user responds correctly and doesn’t enter non-numeric data.) The program should accomplish all of the following:
    >   - a. Store the information in a 3×5 array.
    >   - b. Compute the average of each set of five values.
    >   - c. Compute the average of all the values.
    >   - d. Determine the largest value of the 15 values.
    >   - e. Report the results.
    > Each major task should be handled by a separate function using the traditional C approach to handling arrays. Accomplish task “b” by using a function that computes and returns the average of a one-dimensional array; use a loop to call this function three times. The other tasks should take the entire array as an argument, and the functions performing tasks “c” and “d” should return the answer to the calling program.
- [Ex_14](./Ex_14.c)
    > Do Ex_13.c, but use variable-length array function parameters.