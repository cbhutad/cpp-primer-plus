//use_new.cpp -- using the new operator
#include <iostream>

int main()
{
    using namespace std;
    int heights = 1001;
    int *p_toptr = new int;
    *p_toptr = 1001;

    double *p_todouble = new double;
    *p_todouble = 1000001.23;

    cout << "Value heights = " << heights << ", Address heights = " << &heights << endl;
    cout << "Value *p_toptr = " << *p_toptr << ", Value of p_toptr = " << p_toptr << endl;
    cout << "Value *p_todouble = " << *p_todouble << ", Value of p_todouble = " << p_todouble << endl;
    cout << "Size of *p_toptr = " << sizeof(*p_toptr) << ", Size of p_toptr = " << sizeof(p_toptr) << endl;
    cout << "Size of *p_todouble = " << sizeof(*p_todouble) << ", Size of p_todouble = " << sizeof(p_todouble) << endl;

    return 0;
}