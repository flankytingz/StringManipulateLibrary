#include <iostream>
#include "string_flanky.h"

using namespace std;
namespace f = flanky;
char* str;
char* str1 = new char[6];
char* str2 = new char[6];

int main() {
    memcpy(str1, "Hello", sizeof("Hello"));
    memcpy(str2, "World", sizeof("World"));

    str = f::add(str1, str2);
    cout << "str: " << str << endl; // outputs str: HelloWorld

    f::addEql(str1, str2);
    cout << "str1: " << str1 << endl; // outputs str1: HelloWorld

    char c = f::getChar(str1, 1);
    cout << "char: " << c << endl; // outputs char: e

    f::setChar(str1, 0, 'A');
    cout << "str1: " << str1 << endl; // outputs str1: AelloWorld

    cout << f::isEqual(str1, str2) << endl; // outputs 0
    cout << f::isGreater(str1, str2) << endl; // outputs 1
    cout << f::isSmaller(str1, str2) << endl; // outputs 0

    delete str;
    str = f::getSubstring(str1, 2, 5);
    cout << "str: " << str << endl; // outputs str: lloWo

    delete str;

    str = f::shiftLeft(str1, 5);
    cout << "str: " << str << endl; // outputs str: Aello
    cout << "str1: " << str1 << endl; // outputs str1: World

    delete str;
    str = f::shiftRight(str1, 3);
    cout << "str: " << str << endl; // outputs str: dlr
    cout << "str1: " << str1 << endl; // outputs str1: Wo

    return 0;
}