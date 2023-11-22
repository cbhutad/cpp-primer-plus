#include <iostream>

int main() 
{
    using namespace std;
    const int feet_to_inch = 12;
    int heightInInches;


    cout << "Your height in inches __" << endl;
    cin >> heightInInches;

    cout << "Your height in feet : " << heightInInches / feet_to_inch << " and inches : " << heightInInches % feet_to_inch << endl;
    
    return 0;
}