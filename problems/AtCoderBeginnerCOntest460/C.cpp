#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> shari;
    vector<int> neta;

    for (int i = 0; i < N; i++) {
        int k;
        scanf("%d", &k);
        shari.push_back(k * 2);
    }
    for (int j = 0; j < M; j++) {
        int k;
        scanf("%d", &k);
        neta.push_back(k);
    }

    sort(shari.begin(), shari.end());
    sort(neta.begin(), neta.end());

    int answer = 0;
    vector<int>::iterator it_shari = shari.begin();
    vector<int>::iterator it_neta = neta.begin();

    while (it_shari != shari.end() && it_neta != neta.end()) {
        if (*it_shari >= *it_neta) {
            answer++;
            it_shari++;
            it_neta++;
        }
        else {
            it_shari++;
        }
    }

    cout << answer;

    return 0;
}