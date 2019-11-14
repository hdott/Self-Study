#pragma once
#include <ctime>
#include "person.h"


class PokerPlayer : virtual public Person{
    private:

    public:
        PokerPlayer() : Person(){};
        PokerPlayer(string first, string last) : Person(first, last){};
        PokerPlayer(Person person) : Person(person){};
        
        int Draw(void) const{
            srandom((unsigned) time(0));
            return (random() % 51 + 1);
        };
        using Person::Show;
};