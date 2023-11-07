//hexoctl2.cpp -- hex and octal literal display in respective bases
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest : " << chest << " (42 in decimal)" << endl;
    cout << hex; //manipulator for changing the number base to hexadecimal
    cout << "waist : " << waist << " (42 in decimal)" << endl;
    cout << oct; // manipulator for chaning the number base to octal
    cout << "inseam : " << inseam << " (42 in decimal)" << endl;

    return 0;
}