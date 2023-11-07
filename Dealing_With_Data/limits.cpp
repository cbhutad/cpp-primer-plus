//limits.cpp -> some integer limits
#include <iostream>
#include <climits>

int main() {
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    //initialization with parantheses
    int some_num = {24};
    long zero_num = {};

    cout << "Some num : " << some_num << " Zero num : " << zero_num << endl;

    //size of operator yeilds size of type or of any variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;
    
    cout << "Maximum values : " << endl;
    cout << "int : " << n_int << endl;
    cout << "short : " << n_short << endl;
    cout << "long : " << n_long << endl;
    cout << "long long : " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte : " << CHAR_BIT << endl;
    return 0;
}