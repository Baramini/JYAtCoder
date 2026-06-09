#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N + 1, 0);
    vector<int> B(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        int k;
        scanf("%d", &k);
        A[i] = k;
    }
    for (int i = 1; i <= N; i++) {
        int k;
        scanf("%d", &k);
        B[i] = k;
    }

    bool checker = true;
    for (int i = 1; i <= N; i++) {
        if (i != B[A[i]]) checker = false;
        if (!checker) break;
    }

    if (checker) cout << "Yes";
    else cout << "No";

    return 0;
}