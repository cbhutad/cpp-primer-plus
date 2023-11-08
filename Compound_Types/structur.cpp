//structur.cpp -- a simple structure
#include <iostream>
#include <string>
using namespace std;

struct inflatable {
    string name;
    float value;
    double price;
};

int main()
{   
    inflatable guest = {
        "Glorios Gloria",
        1.88,
        29.99
    };

    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!" << endl;
    cout << "You have both $" << guest.price + pal.price << endl;
    return 0;

}