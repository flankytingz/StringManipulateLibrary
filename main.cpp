#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hell";
    char text1[] = "Hello";
    char* str = f::getSubstring(text, 0, 2);
    while (*str != '\0')
    {
        cout << *str;
        str++;
    }

    cout << endl;

    for (const char letter : text) cout << letter;
    return 0;
}