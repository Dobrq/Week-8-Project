#include <iostream>
#include "assets.h"

int main() {
    SPUEmployee SPUEmployee01; // no parameter constructor is called;
    SPUStudent SPUStudent01("CSC2430"); // name parameter constructor is called;
    // SPUStudent SPUStudent02 = SPUStudent01; //copy constructor is called;
    // SPUEmployee01 = SPUStudent01; // copy assignment is called;

    SPUStudent01.AddTag("Tag-7891");
    SPUStudent01.AddTag("Tag-1232");
    SPUStudent01.AddTag("Tag-3453");

    SPUStudent SPUStudent02 = SPUStudent01; // copy constructor is called;
    SPUEmployee01 = SPUStudent01; // copy assignment is called;

    std::cout << SPUStudent01.ToString() << std::endl;
    std::cout << SPUStudent02.ToString() << std::endl;
    std::cout << SPUStudent01.ToString() << std::endl;

    return 0;
}
