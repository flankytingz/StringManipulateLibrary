#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hello";
    char text1[] = "World!";
    cout << f::getChar(text, 1);
    cout << f::getChar(text, 5);
    return 0;
}