#include <iostream>

using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N - i; j++) {
            int k = N - i - j;
            int sum = i * 10000 + j * 5000 + k * 1000;
            if (sum == Y) {
                cout << i << ' ' << j << ' ' << k;
                exit(0);
            }
        }
    }

    cout << "-1 -1 -1";
    return 0;
}