#include <iostream>

using namespace std;

inline size_t sum_series(int n) {
    return ((size_t)n * (size_t)(n + 1) / 2);
}

int main() {
    string str;
    cin >> str;

    size_t answer = 0;
    int count = 0;
    char prev = 'd';
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == prev) {
            answer += sum_series(count);
            count = 0;
        }
        count++;
        prev = str[i];
    }
    answer += sum_series(count);

    cout << (answer % (size_t)998244353);

    return 0;
}