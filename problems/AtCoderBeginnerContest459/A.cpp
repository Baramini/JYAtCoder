#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    char str[11] = "HelloWorld";
    for (int i = 1; i <= 10; i++) {
        if (i != X) printf("%c", str[i - 1]);
    }
}