/*
    Write a function that rotates the bits of an unsigned int by a specified number of bits
        to the left. For instance, rotate_l(x,4) would move the bits in x four places to the left,
        and the bits lost from the left end would reappear at the right end. That is, the bit moved
        out of the high-order position is placed in the low-order position. Test the function in a
        program.
*/

#include <stdio.h>
#include <limits.h>

void print_bi(int x);
int rotate_l(int x, int _pos_left_);


int main(void){
    int x = 1 << 31;
    print_bi(x);
    x = rotate_l(x, 4);
    print_bi(x);


    return 0;
}

void print_bi(int x){
    int size = sizeof(int) * CHAR_BIT;
    for(int i = size-1; i >= 0; --i){
        if(x & (1 << i)){
            putchar('1');
        } else{
            putchar('0');
        }
    }
    putchar('\n');
}

int rotate_l(int x, int _pos_left_){
    int _t,
        pos_h = sizeof(int) * CHAR_BIT - 1;

    for(int i = 0; i < _pos_left_; ++i){
        if(x & (1 << pos_h)){
            _t = 1;
        } else{
            _t = 0;
        }
        x <<= 1;
        x |= _t;
    }

    return x;
}