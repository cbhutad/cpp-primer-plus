//strtype4.cpp -- line input
#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    char char1[20];
    string str;

    cout << "Length of string in char1 before input : " << strlen(char1) << endl;
    cout << "Length of string in str before input : " << str.size() << endl;

    cin.getline(char1, 20);
    cout << "You entered : " << char1 << endl;
    cout << "Enter another line of text: " << endl;
    getline(cin ,str);

    cout << "You entered : " << str << endl;
    cout << "Length of string in char1 before input : " << strlen(char1) << endl;
    cout << "Length of string in str before input : " << str.size() << endl;
    
    return 0;
}