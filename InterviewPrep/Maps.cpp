#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
const int TYPE_1=1;
const int TYPE_2=2;
const int TYPE_3=3;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int numQueries;
    map<string,int> studentGrades;
    cin >> numQueries;
    for (int queryNum = 0; queryNum < numQueries; queryNum++)
        {
            int queryType, marks;
            string studentName;
            cin >> queryType;
            if (queryType == TYPE_1)
            {
                cin >> studentName;
                cin >> marks;
                map<string,int>::iterator itr = studentGrades.find(studentName);
                if (itr != studentGrades.end())
                {
                    studentGrades[studentName]+=marks;
                }
                else 
                {
                    studentGrades.insert(make_pair(studentName,                                                             marks));
                }
                
            }
            else if (queryType == TYPE_2)
            {
                cin >> studentName;
                studentGrades.erase(studentName);
            }
            else if (queryType == TYPE_3)
            {
                cin >> studentName;
                //map<string,int>::iterator itr =
                  //  studentGrades.find(studentName);
                cout << studentGrades[studentName] << "\n";    
            }
        }
    return 0;
}



