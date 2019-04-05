#include <iostream>

using namespace std;

typedef unsigned char byte;
byte* encode(uint16_t input)
{
    byte* encode_data = new byte[2];
    encode_data[0] = (byte) (input & 0xFF00) >> 8 ;
    encode_data[1] = (byte) (input & 0x00FF);
    printf("%02X\n", encode_data[1]);
    return encode_data;
}

uint16_t decode(byte* input)
{
    return (uint16_t) ((input[0] << 8) + input[1]);
}

int main()
{
    byte* a = encode(24);
    printf("%d", decode(a));
    return 0;
}
