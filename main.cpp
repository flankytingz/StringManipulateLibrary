#include <iostream>
#include "char.h"

using namespace std;
namespace f = flanky;

int main() {
    cout << "Hello, World!" << std::endl;
    char text[] = "Hello";
    char text1[] = "World!";
    cout << f::length(text);
    f::addEql(text, text1);
    cout << text;
    return 0;
}