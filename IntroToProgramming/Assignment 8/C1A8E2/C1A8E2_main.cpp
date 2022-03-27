// 
// Phillip Ward U09339367
// Phillip.Ward@seagate.com
// C/C++ Programming I
// 162461 Ray Mitchell
// 03/05/2022
// C1A8E2_main.cpp
// Win10
// g++ 11.2.0
// 
// A program that finds and replaces user input phrases
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
const int BUF_SIZE = 100;
const int IN_FILE_ARG = 1;
const int OUT_FILE_ARG = 2;
const int SEARCH_ARG = 3;
const int REPLACE_ARG = 4;
const int TOTAL_ARGS = 5;
int main(int argc, char *argv[])
{
    //check for correct # of input args
    if (argc != TOTAL_ARGS)
    {
        cerr << "Incorrect number of input arguments";
        exit(1);
    }
    //declare and open in file
    ifstream inFile(argv[IN_FILE_ARG]);
    char charBuf[BUF_SIZE];
    //check if the input file is open
    if (inFile.is_open())
    {
        //declare and open the out file
        ofstream outFile(argv[OUT_FILE_ARG]);
        //check if it opened properly
        if (outFile.is_open())
        {
            size_t jumpTo = strlen(argv[SEARCH_ARG]);
            //While there are still characters in the infile
            while (!inFile.eof())
            {
                char *cp1, *cp2;
                inFile.getline(charBuf, BUF_SIZE);//get a line at a time
                charBuf[strcspn(charBuf, "\n")] = '\0';//strip the newline char
                //declare a pointer to the start of the character buffer and 
                //find the first character of the search string
                for (cp1 = charBuf; cp2 = strstr(cp1, argv[SEARCH_ARG]);)
                {
                    //write the beginning of the line 
                    //through the start of the search phrase
                    outFile.write(cp1, cp2 - cp1);
                    //Write the replace phrase 
                    outFile << argv[REPLACE_ARG];
                    //move the pointer to after the replace phrase
                    cp1 = cp2 + jumpTo;
                }
                //write the rest of the line
                if (!inFile.eof())
                {
                    outFile << cp1 << "\n";
                }
            }
        }
        else
        {
            cerr << "File: " << argv[OUT_FILE_ARG] << " could not be opened\n";
            exit(1);
        }
        //close the out file
        outFile.close();
    }
    else
    {
        cerr << "File: " << argv[IN_FILE_ARG] << " could not be opened\n";
        exit(1);
    }
    //Close the in file
    inFile.close();

    return(0);
}
