// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming II
// 164440 Ray Mitchell
// 04/06/2022
// C2A2E1_CountBitsF.c
// Win10
// g++ 11.2.0
// 
// 
//

int CountIntBitsF(void)
{
    unsigned int intVar = 1;
    for (int ind = 0; ind < sizeof(unsigned int); ind++)
    {
        if ((intVar << 1) == 0)
        {
            return ind;
        }
    }
}
