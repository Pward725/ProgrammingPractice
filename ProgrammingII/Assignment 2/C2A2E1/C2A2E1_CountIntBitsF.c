// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming II
// 164440 Ray Mitchell
// 04/06/2022
// C2A2E1_CountIntBitsF.c
// Win10
// g++ 11.2.0
// 
// A file that returns the number of bits required to store an unsigned int
//
int CountIntBitsF(void)
{
    int count = 0;
    //pop zeros on until it saturates back to zero
    for (unsigned int intVar = 1; intVar > 0; intVar <<= 1)
    {
        count++;
    }
    return count;
}
