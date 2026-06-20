#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    double x = X / 16.0;
    double y = Y / 9.0;
    if (x == y) cout << "Yes";
    else cout << "No";
}