#include <iostream>

using namespace std;

int main() {
    char s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int result = 0;
    if (s1 == '1') result++;
    if (s2 == '1') result++;
    if (s3 == '1') result++;
    cout << result;

    return 0;
}