#include <iostream>

using namespace std;

char arr[51][51];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    int h, w; cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
    }
    
    
    int start_I = 0;
    int end_I = h;
    int start_J = 0;
    int end_J = w;

    for(int i = start_I; i <= end_I; i++) {
        for(int j = start_J; j <= end_J; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    bool is_Black = false;
    while(!is_Black) {
        for(int j = start_J; j <= end_J; j++) {
            if(arr[start_I][j] == '#') {
                is_Black = true;
            }
            
            if(!is_Black) {
                start_I++;
            }
        }
    }

    is_Black = false;
    while(!is_Black) {
        for(int j = start_J; j <= end_J; j++) {
            if(arr[end_I][j] == '#') {
                is_Black = true;
            }
            
            if(!is_Black) {
                end_I--;
            }
        }
    }
    
    is_Black = false;
    while(!is_Black) {
        for(int i = start_I; i <= end_I; i++) {
            if(arr[i][start_J] == '#') {
                is_Black = true;
            }
            
            if(!is_Black) {
                start_J++;
            }
        }
    }

    is_Black = false;
    while(!is_Black) {
        for(int i = start_I; i <= end_I; i++) {
            if(arr[i][end_J] == '#') {
                is_Black = true;
            }
            
            if(!is_Black) {
                end_J--;
            }
        }
    }

    for(int i = start_I; i <= end_I; i++) {
        for(int j = start_J; j <= end_J; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}