#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numQueries;
    cin >> numQueries;
    set<int> set1;
    for (int queryNum = 0; queryNum < numQueries; queryNum++)
    {
        int queryType, integer;
        cin >> queryType >> integer;
        if (queryType == 1)
        {
            set1.insert(integer);
        }
        else if (queryType == 2)
        {
            set1.erase(integer);
        }
        else if (queryType == 3)
        {
            
            if (set1.find(integer) != set1.end())
            {
                //we found the integrator
                cout << "Yes\n";
            }
            else 
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}



