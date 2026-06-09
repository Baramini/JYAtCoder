#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> mochi;
    for (int i = 0; i < N; i++) {
        int k;
        cin >> k;
        mochi.insert(k);
    }

    cout << mochi.size();
    return 0;
}