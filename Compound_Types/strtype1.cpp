//strtype1.cpp -- using the C++ string class
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline :" << endl;
    cin.getline(charr1, 20);
    cout << "Enter another kind of feline : " << endl;
    cin >> str1;
    cout << "Here are some felines : " << endl;
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;

    return 0;
}