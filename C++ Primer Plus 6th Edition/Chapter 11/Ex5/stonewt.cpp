// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, int state)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    this->state = state;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, int state)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
    this->state = state;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

Stonewt Stonewt::operator+(const Stonewt & st) const{
    return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const{
    return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt & st) const{
    return Stonewt(pounds * st.pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st){
    if(st.state == Stonewt::STONE){
        os << st.stone << " stone, " << st.pds_left << " pounds\n";
    }
    if(st.state == Stonewt::INTPOUND){
        os << (int) st.pounds << " pounds\n";
    }
    if(st.state == Stonewt::FLOATPOUND){
        os << st.pounds << " pounds\n";
    }

    return os;
}