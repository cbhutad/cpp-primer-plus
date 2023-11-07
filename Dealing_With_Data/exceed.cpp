// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0
#include <climits>

int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Add $1 to each account now " << endl;

    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited. \n Poor sam" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Taking $1 from each account now." << endl;

    sam = sam - 1;
    sue = sue - 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited. \n Lucky sue" << endl;

    return 0;
}