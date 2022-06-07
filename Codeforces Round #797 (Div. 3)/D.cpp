#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define INF 2e9
#define F first
#define S second
using namespace std;
 
typedef long long l;
typedef pair<int,int> p;
typedef tuple<int,int,int> tu;
typedef vector<int> vc;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    int t;cin >> t;
 
    while(t--){
        int n,k,MIN = 2 * 100000 + 1,ans = 0,cnt = 0,idx = 0;
        string str;
 
        cin >> n >> k >> str;
 
        for(int i=0;i<n;i++){
            if(str[i] == 'B') cnt++;
            else if(str[i] == 'W') ans++,cnt++;
 
            if(cnt >= k){
                MIN = min(MIN,ans);
                if(str[idx] == 'W') ans -= 1;
                idx++;
            }
        }
 
        cout << MIN << "\n";
    }
}
