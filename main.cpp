#include <iostream>
#include "string_flanky.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hell";
    char text1[] = "Hello";
    char* str = f::shiftRight(text, 2);

    while (*str != '\0')
    {
        cout << *str << endl;
        str++;
    }

    cout << endl;

    for (const char& letter : text) cout << letter;
    return 0;
}