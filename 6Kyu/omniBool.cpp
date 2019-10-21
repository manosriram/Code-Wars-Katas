#include <iostream>
#define omnibool 42 || 42  // omnibool is (TRUE || FALSE) which is TRUE.
using namespace std;

/*
    In C++, 42 is a magic number which represents a boolean value as both true
    and false. We just put a OR operator between them to make them always TRUE.
*/

int main() { cout << (omnibool == true && omnibool == false); }