//==========================================================
//data-xproperties.cpp
//variable properties, mem alloc, max values
//const type_info& ti = typeid(i);
//==========================================================
#include <iostream>
#include <string>
#include <climits>
#include <typeinfo>
using namespace std;

int main()
{
    int n = 7;
    int* pn = &n;
    char ch = 'A';
    string str = "A";

    cout << "\n *****Properties of a variable*******\n";
    printf("\n\tname=n, type=%s, value=%d, &n=0x%x //memory address\n", typeid(n).name(), n, &n);
    printf("\n\tpn=0x%x //pn memory address\n", pn);
    pn = pn + 1;
    printf("\n\tpn=0x%x //pn+=1 memory address\n", pn);
    cout << "\n *****F. Memory Allocation Type*******\n";
    cout << "memory allocation for         short: " << sizeof(short) << " bytes\n";
    cout << "memory allocation for           int: " << sizeof(int) << " bytes\n";
    cout << "memory allocation for      unsigned: " << sizeof(unsigned) << " bytes\n";
    cout << "memory allocation for      long int: " << sizeof(long int) << " bytes\n";
    cout << "memory allocation for long long int: " << sizeof(long long int) << " bytes\n";
    cout << "memory allocation for         float: " << sizeof(float) << " bytes\n";
    cout << "memory allocation for        double: " << sizeof(double) << " bytes\n";
    cout << "memory allocation for          char: " << sizeof(char) << " bytes\n";
    cout << "memory allocation for          bool: " << sizeof(bool) << " bytes\n";
    cout << "memory allocation for          char: " << sizeof(ch) << " bytes\n";
    cout << "memory allocation for        string: " << sizeof(str) << " bytes\n";
    cout << "memory allocation for             ""A"": " << sizeof("A") << " bytes\n";

    cout << "\n *****G. Constant Values*******\n";
    cout << "*** the actual value depends on the particular system and library implementation.***" << endl;
    cout << "Minimum value for an object of type int: " << INT_MIN << endl;
    cout << "Maximum value for an object of type int: " << INT_MAX << endl;
    cout << "Maximum value for an object of type unsigned int: " << UINT_MAX << endl;
    cout << "Minimum value for an object of type long int: " << LONG_MIN << endl;
    cout << "Maximum value for an object of type long int: " << LONG_MAX << endl;
    cout << "Maximum value for an object of type unsigned long int: " << ULONG_MAX << endl;
    cout << "Minimum value for an object of type long long int: " << LLONG_MIN << endl;
    cout << "Maximum value for an object of type long long int: " << LLONG_MAX << endl;
    cout << "Maximum value for an object of type unsigned long long int: " << ULLONG_MAX << endl;

    return 0;
}
