//strtype3.cpp -- more string class features
#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;

    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    //assignment for string objects and character arrays
    str1 = str2;
    strcpy(char1, char2); //old c style string copy as char1 = char2 not allowed

    //appending for string object and character arrays
    str1 += "paste";
    strcat(char1, "juice");

    //find length of string object and c style string
    int len1 = str1.size();
    int len2 = strlen(char1);

    cout << "The string " << str1 << " contains " << len1 << " characters" << endl;
    cout << "The string " << char1 << " contains " << len2 << " characters" << endl;

    return 0;
}