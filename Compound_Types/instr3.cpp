//instr3.cpp -- reading more than one word with get()
#include <iostream>

int main()
{
    using namespace std;
    const int Arrsize = 20;
    char name[Arrsize];
    char dessert[Arrsize];

    cout << "Enter your name : " << endl;
    cin.get(name, 20).get();
    cout << "Enter your dessert : " << endl;
    cin.get(dessert, 20).get();
    cout << "Here is " << dessert << " for you, " << name << endl;
    
    return 0;
}