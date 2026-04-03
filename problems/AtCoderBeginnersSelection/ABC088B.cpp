#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end(), compare);

    int result = 0;
    for (int i = 0; i + 1 < N; i += 2) {
        result += (v[i] - v[i + 1]);
    }
    if (N % 2 == 1) result += v[N - 1];

    cout << result;
    return 0;
}