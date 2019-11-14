#include <cstring>
#include "vintageport.h"


VintagePort::VintagePort() : nickname(nullptr), year(0){};

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : 
                        Port(br, "vintage", b), year(y){
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp){
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
}

VintagePort & VintagePort::operator=(const VintagePort & vp){
    if(this == &vp){
        return *this;
    }

    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);

    return *this;
}

void VintagePort::Show() const{
    Port::Show();
    std::cout << "NickName: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp){
    os << (const Port &) vp;
    os << ", " << vp.nickname << ", " << vp.year;

    return os;
}