//numstr.cpp -- reading numeric input followed by string input
#include <iostream>

int main() 
{
    using namespace std;
    cout << "What year was your house built?" << endl;
    int year;
    cin >> year;
    
    //solution
    cin.get();
    cout << "What is the street address?" << endl;
    char address[80];
    cin.getline(address, 80);
    cout << "Year built " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;

    return 0;
}