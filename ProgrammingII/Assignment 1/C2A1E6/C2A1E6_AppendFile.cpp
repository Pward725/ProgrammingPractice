// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 164440 Ray Mitchell
// 04/03/2022
// C2A1E6_AppendFile.cpp
// Win10
// g++ 11.2.0
// 
// A function that allocates the appropriate amount of memory
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int FAIL = -1;
const int PASS = 0;
const int BUF_SIZE = 1;

int AppendFile(const char *inFile, const char *outFile)
{
    //try to open the in file
    ifstream openInFile(inFile, ios_base::binary);
    if (!openInFile.is_open())
    {
        //fail if it doesn't open
        cerr << "Failed to open " << inFile << "\n";
        return FAIL;
    }
    //try to open the out file
    ofstream openOutFile(outFile, ios_base::binary | ios_base::app);
    if (!openOutFile.is_open())
    {
        //fail if it doesn't open
        cerr << "Failed to open " << outFile << "\n";
        openInFile.close();
        return FAIL;
    }
    char buffer[BUF_SIZE];
    //append to the outfile line by line
    while (openInFile.read(buffer, BUF_SIZE))
    {
        openOutFile.write(buffer, BUF_SIZE);
    }

    openOutFile.close();
    openInFile.close();
    return PASS;
}
