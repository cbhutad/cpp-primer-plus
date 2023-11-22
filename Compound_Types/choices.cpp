//choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>

int main() {
    using namespace std;
    //C, original C++
    double a1[4] = {1.0, 1.1, 1.2, 1.3};
    //C++98 STL
    vector<double> a2(4);
    //no list intialization in C++98
    a2[0] = 2.0;
    a2[1] = 2.1;
    a2[2] = 2.2;
    a2[3] = 2.3;
    //C++11 initialization format
    array<double, 4> a3 = {3.0, 3.1, 3.2, 3.3};
    array<double, 4> a4;
    a4 = a3; //valid for array objects for same size
    //using array notations
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    //mistake
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a2[-2]: " << a2[-2] << " at " << &a2[-2] << endl;
    cout << "a3[4]: " << a3[4] << " at " << &a3[4] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}