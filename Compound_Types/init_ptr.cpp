//init_ptr.cpp -- initialize a pointer variable
#include <iostream>

int main()
{
    using namespace std;

    int higgens = 5;
    int *p_higgens = &higgens;

    cout << "Higgens Value = " << higgens << ", Address higgens = " << &higgens << endl;
    cout << "Value of *p_higgens = " << *p_higgens << ", Value of p_higgens = " << p_higgens << endl;
     
    return 0;
}