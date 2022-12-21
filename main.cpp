#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hello";
    char text1[] = "Hello";
    cout << f::isEqual(text, text1);
    return 0;
}