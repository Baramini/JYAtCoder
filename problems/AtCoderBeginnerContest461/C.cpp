#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    else {
        return a.first < b.first;
    }
}
struct cmp {
    bool operator()(vector<pair<int, int>>::iterator &a, vector<pair<int, int>>::iterator &b) {
        if ((*a).second == (*b).second) {
            return (*a).first > (*b).first;
        }
        else {
            return (*a).second < (*b).second;
        }
    }
};

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<pair<int, int>> gems;

    for (int i = 0; i < N; i++) {
        int c, v;
        cin >> c >> v;
        gems.push_back({c, v});
    }

    sort(gems.begin(), gems.end(), compare);

    priority_queue<vector<pair<int, int>>::iterator, vector<vector<pair<int, int>>::iterator>, cmp> pq;
    priority_queue<vector<pair<int, int>>::iterator, vector<vector<pair<int, int>>::iterator>, cmp> temp_pq;

    int k = 0;
    for (vector<pair<int, int>>::iterator iter = gems.begin(); iter != gems.end(); iter++) {
        if ((*iter).first > k) {
            pq.push(iter);
            k = (*iter).first;
        }
    }

    size_t answer = 0;
    for (int i = 0; i < M; i++) {
        vector<pair<int, int>>::iterator iter = pq.top();
        answer += (*iter).second;
        pq.pop();

        vector<pair<int, int>>::iterator next = ++iter;
        iter--;

        if (next != gems.end() && (*iter).first == (*next).first) temp_pq.push(next);
    }
    while (!temp_pq.empty()) {
        pq.push(temp_pq.top());
        temp_pq.pop();
    }

    for (int i = 0; i < K - M; i++) {
        vector<pair<int, int>>::iterator iter = pq.top();
        answer += (*iter).second;
        pq.pop();

        vector<pair<int, int>>::iterator next = ++iter;
        iter--;

        if (next != gems.end() && (*iter).first == (*next).first) pq.push(next);
    }

    cout << answer;

    return 0;
}