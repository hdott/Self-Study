// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

bool Stonewt::operator>(const Stonewt & st) const{
    if(pounds > st.pounds){
        return true;
    } else{
        return false;
    }
}

bool Stonewt::operator<(const Stonewt & st) const{
    if(pounds < st.pounds){
        return true;
    } else{
        return false;
    }
}

bool Stonewt::operator==(const Stonewt & st) const{
    if(pounds == st.pounds){
        return true;
    } else{
        return false;
    }
}

bool Stonewt::operator!=(const Stonewt & st) const{
    if(pounds != st.pounds){
        return true;
    } else{
        return false;
    }
}

bool Stonewt::operator>=(const Stonewt & st) const{
    if(pounds >= st.pounds){
        return true;
    } else{
        return false;
    }
}

bool Stonewt::operator<=(const Stonewt & st) const{
    if(pounds <= st.pounds){
        return true;
    } else{
        return false;
    }
}

std::istream & operator>>(std::istream & is, Stonewt & st){
    double _tmp;
    is >> _tmp;
    st = _tmp;

    return is;
}
