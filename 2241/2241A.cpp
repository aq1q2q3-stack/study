#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int case1(vector<int> a, vector<int> b, int c, int n) {//정렬을 하는 경우
    int answer = c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++) {
        if(a[i] >= b[i]) {
            answer += (a[i] - b[i]);
        }
        else {
            return -1;
        }
    }
    return answer;
}
int case2(vector<int> a, vector<int> b, int n) {//정렬을 안하는 경우
    int answer = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= b[i]) {
            answer += (a[i] - b[i]);
        }
        else {
            return 2147483647;
        }
    }
    return answer;
}

void solve() {
    int n; cin >> n;
    int c; cin >> c;

    vector<int> a(n);
    vector<int> b(n);
    
    for(auto& i : a) {
        cin >> i;
    }

    for(auto& i : b) {
        cin >> i;
    }

    int cs1 = case1(a,b,c,n);
    int cs2 = case2(a,b,n);
    cout << (cs1 > cs2 ? cs2 : cs1) << '\n';
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