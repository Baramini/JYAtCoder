#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        vector<pair<char, int>> count;
        for (char c = 'a'; c <= 'z'; c++) {
            count.push_back({c, 0});
        }
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++) {
            count[(int)(str[i] - 'a')].second++;
        }

        sort(count.begin(), count.end(), compare);

        if (count[0].second > (str.size() + 1) / 2) cout << "No\n";
        else {
            cout << "Yes\n";

            char prev = 'A';
            int k = 0;
            while (k != str.size()) {
                int i = 0;
                if (prev == count[i].first) i++;
                count[i].second--;
                printf("%c", count[i].first);
                prev = count[i].first;

                sort(count.begin(), count.end(), compare);
                k++;
            }
            printf("\n");
        }
    }

    return 0;
}