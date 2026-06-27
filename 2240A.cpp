#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    if(n <= k) {
        cout << n << '\n';
        return;
    }


    int answer = n / k;
    int bits = 1;
    int temp = 2;
    while(answer >= temp-1) {
        temp *= 2;
        bits++;
    }
    temp/=2;
    bits--;
    
    answer = n - (k * (temp-1));
    int ones = answer / temp;
    answer = (k * bits) + ones;
    cout << answer << '\n';
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