#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //grab the number of arrays and number of queries
    int numArrays, numQueries;
    cin >> numArrays >> numQueries;
    vector<vector<int>> arrayStack;
    //input the arrays
    for (int arrayNum = 0; arrayNum < numArrays; arrayNum++)
    {
        arrayStack.push_back(vector<int>());
        int arrayLength;
        cin >> arrayLength;
        for (int arrayInd = 0; arrayInd < arrayLength; arrayInd++)
        {
            int arrayIn;
            cin >> arrayIn;
            arrayStack[arrayNum].push_back(arrayIn);
            
        }
    }
    //get the queries
    for (int queryNum = 0; queryNum < numQueries; queryNum++)
    {
        int queryArrayNum, queryInd;
        cin >>  queryArrayNum >> queryInd;
        cout << arrayStack[queryArrayNum][queryInd] << "\n";
    }  
    return 0;
}