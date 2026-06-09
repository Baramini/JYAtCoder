#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int x = M, count = 0;
    while (x != 0) {
        x = N % M;
        M = x;
        count++;
    }

    cout << count;

    return 0;
}