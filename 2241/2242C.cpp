#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n+1, 0);
    for(int i = 2; i <= n; i++) {
        int point; cin >> point;
        
        v[i] = v[point] + 1;
    }

    int answer = n;
    vector<int> cnt(n+1,0);
    for(int i = 1; i <= n; i++) {
        cnt[v[i]]++;
    }

    for(auto i : cnt) {
        if(i >= 2) {
            answer++;
        }
    }

    cout << answer << '\n';
    return;
}
int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int t; cin >> t;
    while(t--) {
        solve();
    }


    return 0;
}