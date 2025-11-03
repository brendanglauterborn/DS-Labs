//====================================================================
// getdata.cpp
//Alan  10  5
//Burt   2  8
//Larry 45  3
//Will  34  1
//====================================================================
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    std::ifstream file("zdata.txt");
    std::string name;

    // extract names from the file.
    while (file >> name) {
        int a;
        int b;

        //extract data
        file >> a >> b;

        //print results
        std::cout << name << ' ' << a * b << '\n';
    }
    return 0;
}
