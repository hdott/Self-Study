#pragma once
#include "person.h"


class Gunslinger : virtual public Person{
    private:
        double draw;
        int nr_notches;

    public:
        Gunslinger() : Person(), draw(0){};
        Gunslinger(string first, string last, double draw, int non) : Person(first, last), 
                                                            draw(draw), nr_notches(non){};
        Gunslinger(Person person, double draw, int non) : Person(person), draw(draw),
                                                        nr_notches(non){};
        Gunslinger(double draw, int non) : Person(), draw(draw), nr_notches(non){};

        double Draw(void) const{return draw;};
        void Show(void) const{
            cout << "Draw: " << draw << "\n" << "Nr. of Notches: " << nr_notches << endl;
        }
};