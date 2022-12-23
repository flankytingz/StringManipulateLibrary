#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hell";
    char text1[] = "Hello";
    char* str = f::add(text, text1);
    while (*str != '\0')
    {
        cout << *str;
        str++;
    }
    return 0;
}