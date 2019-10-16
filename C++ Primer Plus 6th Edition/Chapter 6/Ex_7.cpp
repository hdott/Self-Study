/*
    Write a program that reads input a word at a time until a lone q is entered.The
        program should then report the number of words that began with vowels, the num-
        ber that began with consonants, and the number that fit neither of those categories.
        One approach is to use isalpha() to discriminate between words beginning with
        letters and those that don’t and then use an if or switch statement to further iden-
        tify those passing the isalpha() test that begin with vowels.A sample run might
        look like this:
    Enter words (q to quit):
    The 12 awesome oxen ambled
    quitely across 15 meters of lawn. q
    5 words beginning with vowels
    4 words beginning with consonants
    2 others
*/

#include <iostream>
#include <cctype>


int main(void){
    int vowels{0},
        consonants{0},
        others{0};
    
    std::cout << "Enter words (q to quit): " << std::endl;
    std::string word;
    std::cin >> word;
    while(!std::cin.fail()){
        if(word[0] == 'q' && word.size() == 1){
            break;
        }

        if(isalpha(word[0])){
            switch(word[0]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        } else{
    char ch;
            others++;
        }

        std::cin >> word;
    }

    std::cout << vowels << " words beginning with vowels" << std::endl;
    std::cout << consonants << " words beginning with consonants" << std::endl;
    std::cout << others << " others" << std::endl;
    

    return 0;
}