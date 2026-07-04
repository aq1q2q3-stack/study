#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int a,b; cin >> a >> b;

    double answer = (b * 2) / 3;

    if(a > answer) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}