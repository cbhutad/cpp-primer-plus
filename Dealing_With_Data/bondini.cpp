//bodini.cpp -- using escape sequences
#include <iostream>

int main() 
{
    using namespace std;
    cout << "Operation \"HyperHyper\" is now activated!\n";
    cout << "Enter your agent code : ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "You entered " << code << "...\n";
    cout << "Code Verified! Proceed with Plan Z3!\n";

    return 0;
}