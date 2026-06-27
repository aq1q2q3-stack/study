#include <iostream>
#include <vector>
using namespace std;

int arr[300001] = {0, };
vector<pair<int,int>> v[300001];
int main()
{
    cin.tie(0)->sync_with_stdio(false);
    
    int n, m; cin >> n >> m;

    
    int answer = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        int d, b; cin >> d >> b;

        
        v[d].push_back({a, b});
        if(arr[a] == 0) {
            answer++;
        }
        arr[a]++;
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 0; j < v[i].size(); j++) {
            arr[v[i][j].first]--;
            if(arr[v[i][j].first] == 0) {
                answer--;
            }

            if(arr[v[i][j].second] == 0) {
                answer++;
            }
            arr[v[i][j].second]++;
        }
        cout << answer << '\n';
    }
    return 0;
}