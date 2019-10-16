/*
    Write a precursor to a menu-driven program.The program should display a menu
        offering four choices, each labeled with a letter. If the user responds with a letter
        other than one of the four valid choices, the program should prompt the user to
        enter a valid response until the user complies.Then the program should use a
        switch to select a simple action based on the user’s selection.A program run could
        look something like this:
    Please eneter one of the following choices:
    c) carnivore        p) pianist
    t) tree             g) game
    f
    Please enter a c, p, t, or g: q
    Please enter a c, p, t, or g: t
    A maple is a tree;
*/

#include <iostream>


int main(void){
    std::cout << "Please enter one of the following choices:" << std::endl;
    std::cout << "c) carnivore\n"
            << "p) pianist\n"
            << "t) tree\n"
            << "g) game" << std::endl;
    
    char ch;
    std::cin >> ch;
    while(ch != 'c' && ch != 'p'
        && ch != 't' && ch != 'g'){
            std::cout << "Please enter a c, p, t, or g: ";
            std::cin >> ch;
        }
    
    switch(ch){
        case 'c':
            std::cout << "A Lion is a carnivore." << std::endl;
            break;
        case 'p':
            std::cout << "Mozart was a pianist." << std::endl;
            break;
        case 't':
            std::cout << "A maple is a tree." << std::endl;
            break;
        case 'g':
            std::cout << "Pacman is a game." << std::endl;
            break;
    }
    

    return 0;
}