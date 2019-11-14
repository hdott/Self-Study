#pragma once
#include "gunslinger.h"
#include "pokerplayer.h"


class BadDude : public Gunslinger, public PokerPlayer{
    private:

    public:
        BadDude() : Person(), Gunslinger(), PokerPlayer(){};
        BadDude(string first, string last, double draw, int non) : Person(first, last),
                                                Gunslinger(draw, non), PokerPlayer(){};
        BadDude(Person person, double draw, int non) : Person(person), Gunslinger(draw, non),
                                                        PokerPlayer(){};

        double Gdraw(void) const{return Gunslinger::Draw();};
        int Cdraw(void) const{return PokerPlayer::Draw();};
        void Show(void) const{
            Person::Show();
            Gunslinger::Show();
        };
};