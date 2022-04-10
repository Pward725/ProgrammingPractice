// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming II
// 164440 Ray Mitchell
// 04/06/2022
// C2A2E2_Rotate.cpp
// Win10
// g++ 11.2.0
// 
//  Conatins a function to bit rotate a number by a specified amount
//
int CountIntBitsF();
unsigned Rotate(unsigned object, int count)
{
    int countBits = CountIntBitsF();
    if (count > 0)
    {
        //how many bits to shift before saturation
        count %= countBits;
        //right shift count bits and left shift the rest
        return (object >> count) | object << (countBits - count);
    }
    else//count <= 0
    {
        //how many bits to shift before saturation
        count = -count;
        count %= countBits;
        //left shift count bits and right shift the rest
        return (object << count) | object >> (countBits - count);
    }
}
