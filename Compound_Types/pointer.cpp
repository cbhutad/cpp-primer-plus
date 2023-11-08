//pointer.cpp -- our first pointer variable
#include <iostream>

int main()
{
    using namespace std;

    int updates = 15;
    int *p_updates;

    p_updates = &updates;

    cout << "Values : updates = " << updates << " , *p_updates = " << *p_updates << endl;
    cout << "Addresses : &updates = " << &updates << " , p_updates = " << p_updates << endl;
    
    *p_updates = *p_updates + 1;
    cout << "Post update, updates = " << updates << endl;

    return 0;
}