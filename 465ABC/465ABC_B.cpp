#include <iostream>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int x,y,L,R,a,b; cin >> x >> y >> L >> R >> a >> b;

    int answer = 0;
    int time = b - a;
    //사이인 구간 구하기
    
    while(time--) {
        if((L <= a && a <= R) &&(L <= a + 1 && a + 1 <= R)) {
            answer += x;
        }
        else {
            answer += y;
        }
        a++;
    }  
    cout << answer;

    return 0;
}