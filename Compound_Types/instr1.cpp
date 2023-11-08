//instr1.cpp -- reading more than one string
#include <iostream>

int main()
{
    using namespace std;
    const int Arrsize = 20;
    char name[Arrsize];
    char dessert[Arrsize];

    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your favorite dessert:" << endl;
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you " << name << endl;
    return 0;
}