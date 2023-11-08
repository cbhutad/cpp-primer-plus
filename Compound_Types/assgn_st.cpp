//assgn_stp.cpp -- assigning structures
#include <iostream>
#include <string>

struct inflatable {
    std::string name;
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable boquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;

    cout << "Boquet name : " << boquet.name << " && boquet.price : " << boquet.price << endl; 
    //assigning structures using =
    choice = boquet;
    cout << "Choice name : " << choice.name << " && choice.price : " << choice.price << endl;
    
    return 0;
}