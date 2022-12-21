#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hello";
    char text1[] = "World!";
    f::setChar(text, 2, 'B');
    cout << text;
    return 0;
}