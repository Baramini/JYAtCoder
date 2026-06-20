#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare1(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first > b.first;
    }
}
bool compare2(pair<int, int>& a, pair<int, int>& b) {
    return a.first < b.first;
}
bool compare3(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int N, Q;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        int h, l;
        cin >> h >> l;
        v.push_back({h, l});
    }
    sort(v.begin(), v.end(), compare1);

    cin >> Q;
    vector<pair<int, int>> query;
    for (int i = 0 ; i < Q; i++) {
        int t;
        cin >> t;
        query.push_back({t, i});
    }
    sort(query.begin(), query.end(), compare2);

    int i = 0, j = 0;
    while (j != query.size()) {
        if (v[i].second > query[j].first) {
            query[j].first = v[i].first;
            j++;
        }
        else {
            i++;
        }
    }

    sort(query.begin(), query.end(), compare3);
    for (int i = 0; i < query.size(); i++) cout << query[i].first << endl;

    return 0;
}