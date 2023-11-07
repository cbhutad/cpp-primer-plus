//morechar.cpp -- the char type and int type contrasted
#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M';
    int ascii_value_ch = ch;
    int a = 57;
    cout << "The ASCII code for " << ch << " is " << ascii_value_ch << endl;

    cout << "Add one to the character code : " << endl;
    ch = ch + 1;
    ascii_value_ch = ch;
    cout << "The ASCII code for " << ch << " is " << ascii_value_ch << endl;

    //using the cout.put() member function to display a char literal or variable
    cout << "Display char variables : ";
    cout.put(ascii_value_ch);
    cout << " and ";
    cout.put(a);
    cout << " and char literal : ";
    cout << '!';

    return 0;    
}