#include <iostream>

using namespace std;

char arr[1000001];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    int h, w, Q; cin >> h >> w >> Q;
    for(int i = 0; i < 1000001; i++) arr[i] = 'A';

    while(Q--) {
        int r,c,x; cin >> r >> c >> x;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                arr[i * w + j] = x;
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << arr[i * w + j];
            }
            cout << '\n';
        }
    }

    return 0;
}