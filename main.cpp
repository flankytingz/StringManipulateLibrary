#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hell";
    char text1[] = "Hello";
    cout << f::isGreater(text, text1);
    cout << f::isSmaller(text, text1);
    return 0;
}