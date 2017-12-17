#include <iostream>

union Byte
{
    unsigned char byte;

    struct
    {
        bool bit1 : 1;
        bool bit2 : 1;
        bool bit3 : 1;
        bool bit4 : 1;
        bool bit5 : 1;
        bool bit6 : 1;
        bool bit7 : 1;
        bool bit8 : 1;
    };
};

int main ()
{
    Byte b;

    b.byte = 13;
    std::cout << b.bit8 << b.bit7 << b.bit6 << b.bit5 << ' '
              << b.bit4 << b.bit3 << b.bit2 << b.bit1 ;
}
