#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    string s; cin >> s;

    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'E') cnt1++;
        else cnt2++;
    }
    cout << (cnt1 > cnt2 ? "East" : "West");

    return 0;
}