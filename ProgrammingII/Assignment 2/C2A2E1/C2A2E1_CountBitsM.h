// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming II
// 164440 Ray Mitchell
// 04/06/2022
// C2A2E1_CountBitsM.h
// Win10
// g++ 11.2.0
// 
// A file that contains the macro definition to return the number of bits in a
// passed object or type
//
#include <limits.h>
#ifndef C2A2E1_COUNTBITSM_H
#define C2A2E1_COUNTBITSM_H
#define CountBitsM(objectOrType) ((int)sizeof(objectOrType)*CHAR_BIT)
#endif
