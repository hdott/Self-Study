// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
    enum {STONE=1, INTPOUND=2, FLOATPOUND=3};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    int state;
public:
    Stonewt(double lbs, int state = FLOATPOUND);          // constructor for double pounds
    Stonewt(int stn, double lbs, int state = STONE); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    
    void setState(int state){this->state = state;};
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(const Stonewt & st) const;

    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif
