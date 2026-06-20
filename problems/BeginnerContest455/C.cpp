#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(size_t a, size_t b) {
    return a > b;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> v;
    for (int i = 0; i < N; i++) {
        int k;
        scanf("%d", &k);
        v.push_back(k);
    }

    sort(v.begin(), v.end());
    vector<size_t> sum_v;

    int prev = -1;
    int index = -1;
    for (int i = 0; i < v.size(); i++) {
        if (prev != v[i]) {
            sum_v.push_back(v[i]);
            index++;
        }
        else {
            sum_v[index] += v[i];
        }
        prev = v[i];
    }

    sort(sum_v.begin(), sum_v.end(), compare);
    size_t answer = 0;
    for (int i = K; i < sum_v.size(); i++) answer += sum_v[i];

    cout << answer;

    return 0;
}