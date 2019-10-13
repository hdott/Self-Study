/*
    Write a program that uses an array of char and a loop to read one word at a
        time until the word done is entered. The program should then report the
        number of words entered (not counting done). A sample run could look
        like this:
    Enter words (to stop, type the word done):
    anteater birthday category dumpster
    envy finagle geometry done for sure
    You entered a total of 7 words.
        You should include the cstring header file and use the strcmp() function to
        make the comparison test.
*/

#include <iostream>
#include <cstring>


int main(void){
    const int LEN{40};
    char word[LEN];
    int count{0};
    
    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    std::cin >> word;

    while(strcmp(word, "done")){
        count++;
        std::cin >> word;
    }
    
    std::cout << "You entered a total of " << count << " words." << std::endl;


    return 0;
}