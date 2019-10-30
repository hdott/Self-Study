/*
    Write a program with the following behavior. First, it asks you how many words you
        wish to enter. Then it has you enter the words, and then it displays the words. Use
        malloc() and the answer to the first question (the number of words) to create a dynamic
        array of the corresponding number of pointers-to- char . (Note that because each element
        in the array is a pointer-to- char , the pointer used to store the return value of malloc()
        should be a pointer-to-a-pointer-to- char .) When reading the string, the program should
        read the word into a temporary array of char , use malloc() to allocate enough storage
        to hold the word, and store the address in the array of char pointers. Then it should
        copy the word from the temporary array into the allocated storage. Thus, you wind up
        with an array of character pointers, each pointing to an object of the precise size needed
        to store the particular word. A sample run could look like this:
    How many words do you wish to enter? 5
    Enter 5 words now:
    I enjoyed doing this exerise
    Here are your words:
    I
    enjoyed
    doing
    this
    exercise
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORD 100

char** makeWordList(int);
void getWords(char **, int);
void printWordList(char **, int);


int main(void){
    int size;
    printf("How many words do you wish to enter? ");
        scanf("%d", &size);
    char **wordList = makeWordList(size);

    printf("Enter %d words now:\n", size);
    getWords(wordList, size);

    printf("Here are your words:\n");
    printWordList(wordList, size);


    for(int i = 0; i < size; ++i){
        free(wordList[i]);
    }
    free(wordList);

    return 0;
}

char** makeWordList(int size){
    return (char**) malloc(size * sizeof(char*));
}

void getWords(char **arr, int size){
    char _tmp[WORD];
    
    for(int i = 0; i < size; ++i){
        scanf("%100s", _tmp);
        arr[i] = (char*) malloc(strlen(_tmp) + 1);
        strcpy(arr[i], _tmp);
    }
}

void printWordList(char **arr, int size){
    for(int i = 0; i < size; ++i){
        puts(arr[i]);
    }
}