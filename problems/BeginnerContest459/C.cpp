#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> masu(N, 0);
    map<int, int> count;
    count.insert({0, N});

    for (int i = 0; i < Q; i++) {
        int q1, q2;
        cin >> q1 >> q2;
        if (q1 == 1) {
            int index = q2 - 1;
            int k = ++(masu[index]);
            count[k - 1]--;
            if (count.find(k) != count.end()) count[k]++;
            else count.insert({k, 1});

            if (count[k - 1] == 0) count.erase(k - 1);
        }
        else {
            int min = count.begin()->first + q2;
            int k = 0;
            for (map<int, int>::iterator iter = count.begin();iter != count.end(); iter++) {
                if (iter->first >= min) k += iter->second;
            }
            printf("%d\n", k);
        }
    }

    return 0;
}