//address.cpp -- using the & operator to find the address
#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups << " and cups address = " << &cups << endl;
    
    return 0;
}