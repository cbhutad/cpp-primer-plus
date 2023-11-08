//instr2.cpp -- reading more than one word with getline
#include <iostream>

int main()
{
    using namespace std;
    const int Arrsize = 20;
    char name[Arrsize];
    char dessert[Arrsize];

    cout << "Enter your name : " << endl;
    cin.getline(name, 20);
    cout << "Enter your dessert : " << endl;
    cin.getline(dessert, 20);
    cout << "Here is special " << dessert << " for you " << name << endl;
    
    return 0;
}