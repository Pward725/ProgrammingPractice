#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string string1, string2;
    cin >> string1;
    cin >> string2;
    cout << string1.size() << " " << string2.size() << "\n";
    cout << string1 + string2 << "\n";
    string string1Prime = string1;
    string1Prime[0] = string2[0];
    string2[0] = string1[0];
    cout << string1Prime << " " << string2 << "\n";
    return 0;
}