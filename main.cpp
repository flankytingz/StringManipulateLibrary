#include <iostream>
#include "string_flanky.h"

using namespace std;
namespace f = flanky;
char* str;
char* str1 = static_cast<char *>(malloc(sizeof(char) * 6));
char* str2 = static_cast<char *>(malloc(sizeof(char) * 6));

void printStrings()
{
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str: " << str << endl;
}

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

    free(str);
    str = f::getSubstring(str1, 2, 5);
    cout << "str: " << str << endl; // outputs str: lloWo

    free(str);
    str = f::shiftLeft(str1, 5);
    cout << "str: " << str << endl; // outputs str: Aello
    cout << "str1: " << str1 << endl; // outputs str1: World

    free(str);
    str = f::shiftRight(str1, 3);
    cout << "str: " << str << endl; // outputs str: dlr
    cout << "str1: " << str1 << endl; // outputs str1: Wo

    return 0;
}