#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    bool detect_odd = false;
    int k = 0;
    while(!detect_odd) {
        for (int i = 0; i < N; i++) {
            if (v[i] % 2 == 1) {
                detect_odd = true;
                break;
            }
            else {
                v[i] /= 2;
            }
        }
        
        if (!detect_odd) k++;
    }

    cout << k;

    return 0;
}